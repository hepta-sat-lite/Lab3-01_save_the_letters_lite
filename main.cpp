#include "mbed.h"
#include "HEPTA_CDH.h"
HEPTA_CDH cdh(PB_5, PB_4, PB_3, PA_8, "sd");
Serial pc(USBTX,USBRX,9600);
int main()
{
    pc.printf("Hello World!\n");
 
    mkdir("/sd/mydir", 0777);
 
    FILE *fp = fopen("/sd/mydir/sdtest.txt", "w");
    if(fp == NULL) {
        error("Could not open file for write\r\n");
    }
    fprintf(fp, "Hello my name is HEPTA\r\n");
    fclose(fp);
 
    pc.printf("Goodbye World!\r\n");
}