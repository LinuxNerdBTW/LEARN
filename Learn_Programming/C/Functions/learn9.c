// program to check wheather the number is positive or not 
#include <stdio.h>

int check(int num);


void main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    check(n);
}

int check(int num)
{
    if ( num < 0 )
    {
        printf("%d is Negative\n",num);
    }else{
        printf("%d is positive\n",num);
    }
}