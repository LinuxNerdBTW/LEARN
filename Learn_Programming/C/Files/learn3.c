#include <stdio.h>

void main()
{
    FILE *file;
    char read = ' ';
    char ch = 'A';
    file = fopen("Learn1.c","r");
    while (read != EOF )
    {
        read = fgetc(file);
        printf("%c",read);
    }
    printf("\n");
    fgetc(file);
    fclose(file);
}