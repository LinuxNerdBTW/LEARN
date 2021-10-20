#include <stdio.h>


void main()
{
    // 3d array on C 
    // initialization of 3d array 
    int array[2][3][3]= {
        {
            {1,1,1},
            {2,2,2},
            {3,3,3}
        },
        {
            {4,4,4},
            {5,5,5},
            {6,6,6},
        },
    };
    for ( int dimension = 0; dimension < 2; dimension++)
    {
        for ( int row = 0; row < 3; row ++)
        {
            for ( int column = 0; column < 3 ; column ++)
            {
                printf("%d\t",array[dimension][row][column]);
            }
            printf("\n");
        }
        printf("\n");
    }
}