#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// structure & File ==> 2 days ==> Html ==> 3 days, css ==> 4 days, js ==> 6 days

void login(); // multi user login with 3 maximum attempts
void menu(); // Assignment 2 parts break garnus
void checkbalance();
void withdraw();
void deposit();
void proceed();
// total<, 5000<= , total%500 == 0

float total = 6000;

void main()
{
    login();
}

void proceed()
{
    char ch;
    printf("\nPress Y to continue... ");
    scanf(" %c",&ch);
    system("cls");
    if(ch == 'Y' || ch == 'y')
    {
        menu();
    }
    else
    {
        exit(0);
    }
}

void deposit()
{
    float da;
    printf("Enter Amount to Deposit : ");
    scanf("%f",&da);
    if(da<=10000)
    {
        //total = total + da;
        total += da;
        printf("\nDeposited Amount = $%.2f\n",da);
        printf("\nTotal Balance = $%.2f\n",total);
    }
    else
    {
        printf("\nAmount must not be greater than 10k!\n");
    }
}

void withdraw()
{
    float wa;
    printf("Enter Amount to Withdraw : ");
    scanf("%f",&wa);
    if(wa <= total)
    {
        if(wa <= 5000)
        {
            if((int)wa%500 == 0)
            {
                //total = total - wa;
                total -= wa;
                printf("\nWithdraw Amount = $%.2f\n",wa);
                printf("\nTotal Available Balance  = $%.2f\n",total);
            }
            else
            {
                printf("\nAmount must be Multiple of 500!\n");
            }
        }
        else
        {
            printf("\nAmount Exceeds Per Transaction Limit!\n");
        }
    }
    else
    {
        printf("\nInsufficient Balance!\n");
    }
}

void checkbalance()
{
    printf("Your Total Balance is $%.2f",total);
}

void menu()
{
    int n;
    printf("************* Welcome to Swiss Bank ***************\n");
    printf("Options:\n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\n   Select : ");
    scanf("%d",&n);
    system("cls");
    switch(n)
    {
    case 1:
        //printf("Check Balance");
        checkbalance();
        break;
    case 2:
        //printf("Withdraw");
        withdraw();
        break;
    case 3:
        //printf("Deposit");
        deposit();
        break;
    case 4:
        exit(0);
        //printf("Exit");
        break;
    default:
        printf("\nInvalid Option!\n");
    }
    proceed();
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



