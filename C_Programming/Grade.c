//A ==> 80-100, B ==> 60-79, C ==>40-59 ,0-39 ==> Fail, 100+,0- ==> invalid
//(num>=80 && num<=100)

 //even and odd

 //n%2 == 0

 //multiple of 3 but not multiple of 9
#include<stdio.h>

void main()
{
    int marks;
    printf("Enter Your Marks in Percentage : ");
    scanf("%d",&marks);
    //printf("%d out of %d\n",marks,100);
    if(marks>=80 && marks<=100)
    {
        printf("Congratulation! You got Grade A!");
    }
    else if(marks>=60 && marks<80)
    {
        printf("Grade B!");
    }
    else if(marks>=40 && marks<60)
    {
        printf("Grade C!");
    }
    else if(marks>=0 && marks<40)
    {
        printf("Sorry! You Failed!");
    }
    else
    {
        printf("You are an idiot!");
    }
}
