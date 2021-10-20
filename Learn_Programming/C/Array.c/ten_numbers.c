#include <stdio.h>

int main()
{
    int num[10], i = 1;

    // taking 10 number input from user using for loop 
    
    for (; i <= 10; i++)
    {
        printf("Num %d : ",i);
        scanf("%d",&num[i]);

    }

    // printing those numbers which were taken from user : 
    printf("Numbers : \n");
    for (int j = 1; j <= 10; j++)
    {
        printf("Num %d : %d\n",j,num[j]);
    }

    return 0;
}