#include<stdio.h>

nested if... switch case
2019-12-31
2019-02-29
2019-04-31

void main()
{
    int y;
    printf("Enter a Year : ");
    scanf("%d",&y);
    if((y%400==0)||((y%4==0)&&(y%100!=0)))
    {
        printf("leap yeAr");
    }
    else
    {
        printf("not leap year");
    }
}
