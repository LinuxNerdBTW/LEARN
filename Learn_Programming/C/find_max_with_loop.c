#include <stdio.h>

#include <math.h>

void main()
{
    int num[10];
    int findmin;
    for ( int i = 1; i <= 10; i++)
    {
        printf("Num %d : ",i);
        scanf("%d",num[i]);
    }

    // find max and min 
    for ( int i = 1; i <= 10; i++)
    {

        findmin = fmin(num[i],num[i]);
    }
    printf("%d",findmin);
}