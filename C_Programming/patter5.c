#include<stdio.h>

void main()
{
    int j,i;

    for(i=1;i<=5;i++)
    {
        for(j=i;j<=4;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
/*
----*
---***
--*****
-*******
*********
*/
