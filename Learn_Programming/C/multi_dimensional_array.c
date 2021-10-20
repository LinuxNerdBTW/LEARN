#include <stdio.h>

void main()
{
    int runs[3][3],i,j,sum=0;
    float avg; 
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter the run in match %d by Batsman %d : \n",j+1,i+1);
            scanf("%d",&runs[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0 ; j < 3; j++)
        {
            sum = sum + runs[i][j];
        }
        avg = (float) sum / 3;
        printf("Batsman %d has scored %d with average %.2f \n",i+1,sum , avg);
        avg = 0.0;
        sum = 0;
    }
}