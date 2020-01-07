/*output:

    Enter first number: -2
    please enter positive value : -4
    please enter positive value : -90
    please enter positive value : 3

    enter second number: -121
    please enter positive value : -4
    please enter positive value : -89
    please enter positive value : 5

    3 + 5 = 8
*/

#include<stdio.h>

void main()
{
    int n1,n2;
    printf("Enter First Number : ");
    scanf("%d",&n1);
    while(n1<0)
    {
        printf("Please Enter Positive Value : ");
        scanf("%d",&n1);
    }

    printf("\nEnter Second Number : ");
    scanf("%d",&n2);
    while(n2<0)
    {
        printf("Please Enter Positive Value : ");
        scanf("%d",&n2);
    }

    printf("%d + %d = %d",n1,n2,(n1+n2));

    //for ==> nested for ==>patterns
}















