#include<stdio.h>
#include<string.h>

void login();
void menu();
void checkbalance();

float total = 1000;

void main()
{
    login();
}

void checkbalance()
{
    printf("Your Total Balance is %.2f",total);
}

void menu()
{
    int n;
    printf("************* Welcome to Swiss Bank ***************\n");
    printf("Options:\n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\n   Select : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        //printf("Check Balance");
        checkbalance();
        break;
    case 2:
        printf("Withdraw");
        break;
    case 3:
        printf("Deposit");
        break;
    case 4:
        printf("Exit");
        break;
    default:
        printf("Invalid Option!");
    }
}


void login()
{
    char usr[20],pwd[20];
    printf("Enter your Username : ");
    gets(usr);
    printf("Enter your password : ");
    gets(pwd);
    system("cls");
    if((strcmp(usr,"admin")==0)&&(strcmp(pwd,"admin@123")==0))
    {
        printf("Welcome %s\n\n",usr);
        menu();
    }
    else
    {
        printf("\nYour Username or password is incorrect\n");
    }

}


