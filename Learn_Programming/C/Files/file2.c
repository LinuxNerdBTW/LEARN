#include <stdio.h>

void file_open()
{
    FILE *file;
    if (fopen("mangal.txt","w") != NULL)
    {
        printf("Hello wold\n");
    }else{
        printf("Fuck world\n");
    }
    
}


void main()
{
    file_open();
}