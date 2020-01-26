/*file => is a collection of data
secondary storage ==> HDD

text, binary

1. open, write/ read, close

2. search
*/

#include<stdio.h>

void main()
{
    FILE *fp;
    char str[100];
    //fp = fopen("C:\\Users\\Neosphere\\Desktop\\weather_app\\demo.txt","a");
    //fprintf(fp,"Apple");
    //fp = fopen("demo.txt","a");
    //fprintf(fp,"Mango");
    //fclose(fp);
    fp = fopen("demo.txt","r");
    if(fp == NULL )
    {
        printf("File Not Found!");
        exit(0);
    }
    //fscanf(fp,"%s",str);
    //printf(str);
    while(fscanf(fp,"%s",str) == 1);
    {
        printf("%s ",str);
    }



}











