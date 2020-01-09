#include<stdio.h>

void main()
{
    int i;
    printf("The Even Numbers are : ");
    for(i=30;i<=50;i++)
    {
        if(i%2 == 0)
        {
           printf("%d ",i);
        }
    }
    printf("\nThe Odd Numbers are : ");
    for(i=30;i<=50;i++)
    {
        if(i%2 != 0)
        {
           printf("%d ",i);
        }
    }
}

list all multiples of 3 but multiple of 9 should not be listed.
find sum of 1 to 10;

1+2+3+4+5+6+7+8+9+10 ==>


sum = 0

sum = 0 + 1  ==> i = 1

sum = 1

sum = 1 + 2 ==> i = 2

sum = 3

sum = 3 + 3 ==> i = 3

sum = 6

sum = 6 + 4 ==> i = 4

sum = 10

for(i = 1; i<=10;i++)
{
    sum = sum + i;
}

printf("Sum")

