// 3 dimensional Array on C 

#include <stdio.h>

void main()
{
    int array_[3][3] = {
        {1, 2, 3}, {1, 2, 3},  {1, 2, 3},
        {1, 2, 3}, {1, 2, 3}, {1, 2, 3},
        {1, 2, 3}, {1, 2, 3}, {1, 2, 3}
    };

    for ( int row = 0; row < 4;row++)
    {
        for ( int column = 0; column < 4; column++)
        {
            printf("%d\t",array_[row][column]);
        }
        printf("\n");
    }
}