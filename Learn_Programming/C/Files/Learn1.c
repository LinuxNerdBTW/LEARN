#include <stdio.h>

void main()
{
    FILE *fptr;
    char ch = ' ';
    // writing to a file 

    // char text[100] = "Hello world";
    // fptr = fopen("hello.txt","w");
    // fputs(text,fptr);
    // fclose(fptr);

    // reading from a file 
    fptr = fopen("scan.txt","r");
    printf("\n");
    while ( ch != EOF)
    {
        ch = fgetc(fptr);
        printf("%c",ch);
    }
    printf("\n");
    fclose(fptr);

}