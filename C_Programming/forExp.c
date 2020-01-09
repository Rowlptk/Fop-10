

/*syntax:
            i=1 ==>1   i<=10 ==> 2          i++/i-- ==> 4
    for(initialization; condition; updation)
    {
        ==> 3
        // statements;
    }
*/
#include<stdio.h>

void main()
{
    int i,n,f;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("Start Point : ");
    scanf("%d",&i);
    printf("Final Point : ");
    scanf("%d",&f);
    for(i;i<=f;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    /*for(f;f>=i;f--)
    {
        printf("%d x %d = %d\n",n,f,n*f);
    }*/
}














