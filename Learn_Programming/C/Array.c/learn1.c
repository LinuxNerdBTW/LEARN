// multidimensional arry on c 
#include <stdio.h>

void main()
{
    // matrix declaration 
    int multimatrix[3][3][3] = {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };

    for ( int i = 0 ; i < 3; i++)
    {
        for ( int j = 0 ; j < 3; j++)
        {
            printf("%d\t", multimatrix[i][j][j]);
        }
        printf("\n");
    }
    
}