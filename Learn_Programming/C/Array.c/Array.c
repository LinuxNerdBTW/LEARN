#include <stdio.h>

void main()
{
    // declaration of array
    char letters[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("\n");
    for ( int i = 0 ; i <= 26 ; i++)
    {
        printf("%c\n",letters[i]);
    }

}