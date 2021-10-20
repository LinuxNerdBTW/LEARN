#include <stdio.h>


void main()
{
    int a; 
    char b;
    float c;

    // checking the memory address of the varables using & operator 
    printf("Using & operator \n");
    printf("The memory location of int a is : %p\n",&a);
    printf("The memory location of int b is : %p\n",&b);
    printf("The memory location of int c is : %p\n",&c);
    // checking the memory address of the variables using pointer 
    int *pointer1 = &a;
    char *pointer2 = &b;
    float *pointer3 = &c;
    printf("Using Pointer....\n");
    printf("The memory location of int a is : %p\n", pointer1);
    printf("The memory location of int b is : %p\n", pointer2);
    printf("The memory location of int c is : %p\n", pointer3);
}