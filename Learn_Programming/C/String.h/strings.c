#include <stdio.h>
#include <string.h>

void main()
{
    char name[]="hello ";
    char last[]="world\n";
    // finding the length of the string 
    printf("strlen() : %d\n",strlen(name));
    // concatenating the two strings
    printf("strcat() : %s",strcat(name,last));
    // comparing the two strings hello and world , statement will be false because its not equal to each other.
    (strcmp(name,last) == 0) ? printf("strcmp() : String is equal !!!\n"):printf("strcmp() : String is not equal !!!\n");
    // lowercase example
    // printf("strlwr() : %s",strlwr(name));
    // reverse the strings 
    // printf(strrev("hello"));

}