#include <stdio.h>
struct employee
{
    char name[35];
    unsigned int age;
    char address[50];
    float salary;
};

void main()
{
    struct employee emp1;
    printf("\nThe size of the structure is %d bytes\n",sizeof(emp1));
}
