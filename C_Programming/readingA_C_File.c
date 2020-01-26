#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("readingA_C_File.c","r");
    if(fp == NULL)
    {
        printf("File not Found!");
        exit(0);
    }
    // fgetc(fp), feof(fp)
    while(!feof(fp))
    {
        ch = fgetc(fp);
        putchar(ch);
    }
}
