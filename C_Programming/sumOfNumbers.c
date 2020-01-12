#include<stdio.h>

void main()
{
    int i, sum = 0;
    for(i=1;i<=10;i++)
    {
        sum = sum + i;
        if(i<=9)
        {
            printf("%d + ",i);
        }
        else
        {
            printf("%d = ",i);
        }
        //sum += i;
    }
    printf("%d",sum);
}

