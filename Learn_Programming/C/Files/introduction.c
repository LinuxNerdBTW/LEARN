#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    fptr = fopen("mangal.txt","w");

    if ( fptr == NULL) 
    {
        printf("\nCannot Open a file\n");
        exit(1);
    }else{
        printf("File Exists\n");
    }
    
}