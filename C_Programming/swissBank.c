#include<stdio.h>
#include<string.h>

void login();
void menu();

void main()
{
    login();
}

void menu()
{
    int n;
    printf("************* Welcome to Swiss Bank ***************\n");
    printf("Options:\n1. Check Balance\n2. Withdraw\n3. Deposit\n4. Exit\n   Select : ");
    scanf("%d",&n);
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
        printf("\nWelcome %s\n",usr);
        menu();
    }
    else
    {
        printf("\nYour Username or password is incorrect\n");
    }

}



