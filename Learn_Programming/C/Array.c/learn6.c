#include <stdio.h>

void main()
{
    // intialization of array 
    int array_3d[3][2][4] = {
        {
            {1,1,1,1},
            {2,2,2,2},
        },
        {
            {3,3,3,3},
            {4,4,4,4},
        },
        {
            {5,5,5,5},
            {6,6,6,6},
        },
    };

    // accessing the values 
    for ( int dimensions = 0 ; dimensions < 3; dimensions++)
    {
        for ( int row = 0; row < 2; row++ )
        {
            for ( int column = 0; column < 4; column++)
            {
                printf("%d\t",array_3d[dimensions][row][column]);
            }
            printf("\n");
        }
        printf("\n");
    }


}