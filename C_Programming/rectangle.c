#include<stdio.h>

void main()
{
    float l,b,A,P;
    printf("Enter length and breadth of a rectangle : ");
    scanf("%f%f",&l,&b);
    A = l * b;
    P = 2*(l+b);
    printf("Rectangle : \nArea = %.2f\nPerimeter = %.2f",A,P);
}

//vote ==> 18 and above
