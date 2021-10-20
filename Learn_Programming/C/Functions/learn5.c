// a program to input a number and calculate its factorial using recursive functions 
#include <stdio.h>

int factorial(int n);
void main()
{
    int num, fact,n;
    printf("Input a Number : ");
    scanf("%d",&num);
    fact = factorial(n);
    printf("The Factorial of %d is %d\n",n,fact);
    
}

int factorial(int n)
{
    if ( n == 0 || n == 1 ) 
    {
        return 1;
    }else{
        return n * factorial( n - 1 );
    }
}