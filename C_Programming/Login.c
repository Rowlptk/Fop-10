#include<stdio.h>

void main()
{
    char susr[20] = "admin";
    char spwd[20] = "123";
    char usr[20],pwd[20];
    int i,flag=0;
    for(i=1;i<=3;i++)
    {
        printf("Attempt Remaining %d\n",(4-i));
        printf("Enter Super User Name : ");
        gets(usr);
        printf("Enter Super User Password : ");
        gets(pwd);

        if((strcmp(susr,usr)==0)&&(strcmp(spwd,pwd)==0))
        {
            flag = 1;
            //printf("\nWelcome %s\n",usr);
            break;
        }
        else
        {
            flag = 0;
            printf("\nLogin Failed!\n");
        }
    }

    if(flag == 1)
    {
        printf("\nWelcome %s\n",usr);
    }
    else
    {
        printf("\nAttempt Remaining %d",(4-i));
        printf("\nYour Account is Locked!\n");
    }
}
