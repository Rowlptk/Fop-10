#include<stdio.h>

void main()
{
    int i;
    for(i=30; i<=50; i++)
    {
        if(i%3==0 && i%9!=0)
        {
            printf("%d ",i);
        }
    }
}
