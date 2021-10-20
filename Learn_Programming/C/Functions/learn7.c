// program to input a number and checks wheather its a odd or even using a function 

#include <stdio.h>

void check(int n);

void main()
{
    int num;
    printf("Enter a Random Number : ");
    scanf("%d",&num);
    check(num);
}

void check(int n)
{
    if ( n % 2 == 0)
    {
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
}
