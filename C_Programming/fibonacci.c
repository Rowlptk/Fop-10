#include<stdio.h>
void main()
{
    int x = 0, y = 1, z,i=2;

    printf("%d %d",x,y);

    while(i<=50)
    {
        z = x + y;
        x = y;
        y = z;
        printf(" %d ",z);
        i++;
    }


}
