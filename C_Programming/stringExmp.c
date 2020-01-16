#include<stdio.h>

void main()
{
    char str[20] = "Apple";
    char ch;
    printf("string : %s",str);
    printf("\nEnter a text: ");
    //scanf("%s",str);
    gets(str);
    //printf("\nstring : %s",str);
    puts(str);

    printf("\n\nprintf Enter a character");
    ch = getchar();
    putchar(ch);

}
