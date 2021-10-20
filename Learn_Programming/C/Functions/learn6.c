// program to input a number and calculate the sum of all natural numbers up to that number 
#include <stdio.h>

int sum (int);
void main()
{
    int n,s;
    printf("Input a number : ");
    scanf("%d",&n);
    s = sum(n);
    printf("The sum of all natural numbers upto %d is %d\n",n,s);
}

int sum(int n)
{
    if ( n <= 0 )
    {
        return 0;
    }
    else
    {
        return ( n + sum ( n - 1 ));
    }
}