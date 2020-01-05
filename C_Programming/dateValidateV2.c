/*1 ==> 31
2 ==> 28/ 29(leap year)
3 ==> 31
4 ==> 30
5 ==> 31
6 ==> 30
7 ==> 31
8 ==> 31
9 ==> 30
10==> 31
11==> 30
12==> 31

1-31 => 1,3,5,7,8,10,12
1-30 ==> 4,6,9,11
1-28 ==> 2
1-29 ==> 2, y==> leap

*/

#include<stdio.h>

void main()
{
    int y,m,d;
    printf("Enter a Date[yyyy-mm-dd]: ");
    scanf("%d-%d-%d",&y,&m,&d);
    if(y>=1000 && y<=9999)
    {
        if(m>=1 && m<=12)
        {
            if((d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
            {
                printf("Valid Date!");
            }
            else if((d>=1 && d<=30) && (m==4 || m==6 || m==9 || m==11))
            {
                printf("Valid Date!");
            }
            else if((d>=1 && d<=28) && (m==2))
            {
                printf("Valid Date!");
            }
            else if((d>=1 && d<=29) && (m==2) && ((y%400==0)|| ((y%4==0)&&(y%100!=0))))
            {
                printf("Valid Date!");
            }
            else
            {
                printf("Invalid Day!");
            }
        }
        else
        {
            printf("Month is Invalid!");
        }
    }
    else
    {
        printf("Year is Invalid!");
    }
}









