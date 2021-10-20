#include <stdio.h>

void main()
{
    // 2dimensional array 
    int array[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("Printing the values : \n");
    for ( int row = 0; row < 3; row++)
    {
        for ( int column = 0; column < 3; column++)
        {
            printf("%d\t",array[row][column]);
        }
        printf("\n");
    }
    
}