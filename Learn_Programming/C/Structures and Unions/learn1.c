#include <stdio.h>

struct employee
{
    char name[20];
    unsigned int age;
    char address[50];
    int salary;

};

struct employee emp1 = {"Mangal",20,"Lubhoo",25000};


void main()
{
    printf("Name : %s\n",emp1.name);
    printf("Age : %d\n", emp1.age);
    printf("Address : %s\n",emp1.address);
    printf("Salary : %d\n",emp1.salary);
}