#include<stdio.h>

void main()
{
    int ary[5] = {23,45,99, -3, 0};
    printf("Before = %d",ary[2]);
    ary[2] = 100;
    printf("\nAfter = %d",ary[2]);

    printf("\nEnter ary[2] = ");
    scanf("%d",&ary[2]);
    printf("Scanf gives = %d",ary[2]);
}
