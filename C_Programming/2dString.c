#include<stdio.h>
#include<string.h>

// strlen(str)==> int output
// strrev(str)
// strupr(str)
// strlwr(str)
// strcat(str1, str2);
// strcpy(str1, str2);
// strcmp(str1, str2);
//==> ASCII ==> A => 65
//both equal ==> 0;
//left thulo ==> +ve int
//right thulo ==> -ve int


void main()
{
    char str[5][30] = {"apple","mango","CherRy","banana","orange"};
    strcpy(str[1],str[3]);
    puts(str[1]);
    puts(str[3]);


    strcat(str[0],str[4]);
    puts(str[0]);
    puts(str[4]);
    //puts(str[2]);
    //gets(str[3]);
    //puts(str[3]);
    printf("\nThe length of Banana = %d",strlen(str[3]));
    strrev(str[1]);
    printf("\nReverse of Mango = %s",str[1]);
    strupr(str[0]);
    printf("\nUppercase of Apple = %s",str[0]);
    strlwr(str[2]);
    printf("\nLowercase of CHERRY = %s",str[2]);
}
