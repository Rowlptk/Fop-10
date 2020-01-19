#include<stdio.h>

//function declaration
void add(); // parameterless function
float sub(); //
int multiply(int n1, int n2); // parameterized function

void main()
{
    //float n;
    //n = sub();
    //printf("Sub = %f",n);

    //printf("Sub = %f",sub());

    printf("Mul = %d",multiply(56,90));
    //add(); // function call
    //add();
}

int multiply(int n1, int n2)
{
    return n1*n2;
}



float sub()
{
    float n1, n2;
    n1 = 156.8;
    n2 = 89.95;
    return n1-n2;
}

// function definition
void add()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);
    printf(" %d + %d = %d \n",n1,n2,(n1+n2));
    //add();
}
