#include<stdio.h>

void main()
{
    int i,j;

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
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=2*i-1;j<=7;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
        /*for(j=7;j>=2*i-1;j--)
        {
            printf("*");
        }
        */


}



----A
---ABC
--ABCDE
-ABCDEFG
ABCDEFGHI
-ABCDEFG
--ABCDE
---ABC
----A


//Array ==> Single Dimension, 2D
// string
// Functions
// Structure and FILE
