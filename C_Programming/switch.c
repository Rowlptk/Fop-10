//switch ... case

#include<stdio.h>

void main()
{
    int day;
    printf("Enter a day number : ");
    scanf("%d",&day);
    switch(day)
    {
        // loop, switch==> example using character as a case
        // while, do.. while, for ==> patterns ==> nested for
    case 8:
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid Day!");
    }
}
