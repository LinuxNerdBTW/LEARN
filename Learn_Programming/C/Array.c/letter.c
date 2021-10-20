#include <stdio.h>

void main()
{
    // array initialization 
    char name[6];
    // name input
    int i; 
    for ( i = 0; i < 6; i++)
    {
        printf("Enter Your name Letter one by one : \n");
        scanf("%c",&name[i]);
    }

    printf("%c",name[1]);
    
}