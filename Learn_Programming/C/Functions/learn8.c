// program to calculate y raise to power x 

#include <stdio.h>

int power(int x , int y);

void main()
{
    int num1,num2;
    printf("Num 1 : ");
    scanf("%d",&num1);
    printf("Num 2: ");
    scanf("%d",&num2);
    printf("%d power of %d is : %d\n",num2,num1,power(num1,num2));    

}


int power(int x , int y)
{
    int power = 1;
    for ( int i = 1; i <= y; i++)
    {
        power = power * x;
    }
    return power;
}
