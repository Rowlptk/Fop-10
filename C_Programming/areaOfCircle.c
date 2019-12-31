#include<stdio.h>
#define PI 3.1416

void main()
{
    float dia, rad, area;
    printf("Enter a diameter : ");
    scanf("%f",&dia);
    rad = dia/2;
    area = PI*rad*rad;
    printf("The Area Of a Circle is %f",area);
}


// Rectangle ==> length, breadth ==> area and perimeter
