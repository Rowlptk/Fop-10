#include<stdio.h>

void main()
{
    int num[10],i,max,min, sum = 0;
    printf("Enter 10 Numbers : \n");
    for(i=0;i<=9;i++)
    {
        printf("num[%d] = ",i);
        scanf("%d",&num[i]);
    }

    printf("\nThe Values stored in array are : \n");
    for(i=0;i<=9;i++)
    {
        printf("Value %d = %d\n",i+1,num[i]);
    }

    printf("\nThe Even Numbers Are : \n");
    for(i=0;i<=9;i++)
    {
       if(num[i]%2 == 0)
       {
           printf("%d ",num[i]);
       }
    }

    printf("\n\nThe Odd Numbers Are : \n");
    for(i=0;i<=9;i++)
    {
       if(num[i]%2 != 0)
       {
           printf("%d ",num[i]);
       }
    }

    max = num[0];
    for(i=0;i<=9;i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }
    printf("\n\nMaximum Value = %d\n",max);

    min = num[0];
    for(i=0;i<=9;i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
    }
    printf("\nMinimum Value = %d\n",min);


    for(i=0;i<=9;i++)
    {
        sum = sum + num[i];
    }

    printf("\n\nSum = %d\n",sum);









}
