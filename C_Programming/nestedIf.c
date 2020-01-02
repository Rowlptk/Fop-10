#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%3 == 0)
    {
        if(n%9!=0)
        {
            printf("multiple of three but not nine");
        }
        else
        {
            printf("Multiple of nine");
        }
    }
    else
    {
        printf("Not a multiple of three");
    }
}
