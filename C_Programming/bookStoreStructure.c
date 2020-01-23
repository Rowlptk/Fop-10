#include<stdio.h>

struct bookStore
{
    char name[30];
    int pages;
    float price;
    char block;
}b[50];
//}b1,b2;

void main()
{
    //struct bookStore b1;
    int n,i,flag=0;
    char bookName[30];
    printf("How Many Entries You want to Make : ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        printf("Enter Book %d Name : ",(i+1));
        gets(b[i].name);
        printf("Enter Book %d Pages : ",(i+1));
        scanf("%d",&b[i].pages);
        printf("Enter Book %d Price : ",(i+1));
        scanf("%f",&b[i].price);
        printf("Enter Book %d Block : ",(i+1));
        scanf(" %c",&b[i].block);
        getchar();
        printf("\n");
    }

    //q=>b[0].name, w=>b[1].name
    //bookName = w

    printf("Search a Book : ");
    gets(bookName);
    for(i=0; i<n; i++)
    {
        if(strcmp(bookName, b[i].name)==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n************ Book %d ******************\n",(i+1));
        printf("Name = %s\nPages = %d\nPrice = $%.2f\nBlock = %c\n",b[i].name,
           b[i].pages,b[i].price,b[i].block);
        printf("****************************************\n");
    }
    else
    {
        printf("Book Not Found!");
    }

    /*for(i=0;i<n;i++)
    {
        printf("\n************ Book %d ******************\n",(i+1));
        printf("Name = %s\nPages = %d\nPrice = $%.2f\nBlock = %c\n",b[i].name,
           b[i].pages,b[i].price,b[i].block);
        printf("****************************************\n");
    }*/
}

file Handling


create, open, read, write, append, close, search


swiss bank ==> file ==> txt file

binary ==> img, docx
txt ==> file












