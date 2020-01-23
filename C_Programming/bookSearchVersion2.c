 printf("Search a Book : ");
    gets(bookName);
    for(i=0; i<n; i++)
    {
        if(strcmp(bookName, b[i].name)==0)
        {
            printf("\n************ Book %d ******************\n",(i+1));
            printf("Name = %s\nPages = %d\nPrice = $%.2f\nBlock = %c\n",b[i].name,
            b[i].pages,b[i].price,b[i].block);
            printf("****************************************\n");
            flag = 1;
        }

    }
    if(flag == 0)
    {
        printf("Book Not Found!");
    }
