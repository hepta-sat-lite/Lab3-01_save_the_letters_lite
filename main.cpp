#include "mbed.h"
#include "LITE_CDH.h"
LITE_CDH cdh(PB_5, PB_4, PB_3, PA_8, "sd", PA_3);
RawSerial pc(USBTX,USBRX,9600);
int main()
{
    pc.printf("Hello World!\n");
    char str[100];
    mkdir("/sd/mydir", 0777);
 
    FILE *fp = fopen("/sd/mydir/sdtest.txt", "w");
    if(fp == NULL) {
        error("Could not open file for write\r\n");
    }
    for (int i=0; i<10; i++)fprintf(fp,"Hello my name is HEPTA\r\n");
    fclose(fp);
    fp = fopen("/sd/mydir/sdtest.txt", "r");
    for (int j =0; j < 10; j++){
        fgets(str,100,fp);
        pc.puts(str);
    }
    pc.printf("Goodbye World!\r\n");
}