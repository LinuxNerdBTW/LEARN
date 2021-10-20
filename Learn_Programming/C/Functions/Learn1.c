// Function with both arguments and return values 

#include <stdio.h>
const float half = 0.5;
int area_of_triangle(int base, int height);

void main()
{
    printf("Finding Area of Triangle....\n");
    printf("Area of triangle is : %d\n",area_of_triangle(10,10));
}
int area_of_triangle(int base, int height)
{
    printf("Base : ");
    scanf("%d",&base);
    printf("Height : ");
    scanf("%d",&height);
    int area = half * base * height;
    return area;
}