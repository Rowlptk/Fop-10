#include<stdio.h>

void main()
{
   int y,m,d;
   printf("Enter a Date[yyyy-mm-dd] : ");
   scanf("%d-%d-%d",&y,&m,&d);
   printf("Year = %d\nMonth = %d\nDay = %d",y,m,d);
   if(y>=1000 && y<=9999)
   {
        //printf("\nYear is Valid!");
        if(m>=1 && m<=12)
        {
            //printf("\nMonth is Valid!");
            if(d>=1 && d<=30)
            {
                printf("Date Is Valid!");
            }
            else
            {
                printf("Day is Invalid!");
            }
        }
        else
        {
            printf("\nMonth is Invalid!");
        }
   }
   else
   {
       printf("\nYear is Invalid!");
   }
}
/*
1000-9999 ==> valid Year
1-12 ==> valid month
1-30 ==> valid day

valid date

*/
