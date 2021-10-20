// 2 dimensional arrya example 
// finding the determination of matrix using 2 dimensional array on C programming 
#include <stdio.h>

void main()
{
    // matrix 
    int i , j;
    int sum;
    // first set of data in matrix 
    int matrix[2][2] = {
        {1,2},
        {3,1}
    };

    // second set of data in matrix 
    int matrix_2[2][2] = {
        {1,2},
        {3,1}
    };

    // printing the matrix values 
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    int determination = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    printf("Determination of matrix is : %d\n",determination);

}