#include<stdio.h>

// if ==> True portion
// else ==> False Portion
// if ..else if ..else/ ladder ==> T/T/F
// Positive or not


void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Positive Number ! ");
    }
    else if(num == 0)
    {
        printf("Zero!");
    }
    else
    {
        printf("negative");
    }
}
