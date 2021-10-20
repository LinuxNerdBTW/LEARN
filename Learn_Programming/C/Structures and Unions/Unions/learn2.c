#include <stdio.h>

struct learn2
{
    int a;
    char b;
    float c;
};

union learn2_
{
    int a;
    char b;
    float c;
};
void main()
{
    struct learn2 s;
    union learn2_ u;

    // structures variable 
    int *p1 = &s.a;
    char *p2 = &s.b;
    float *p3 = &s.c;
    // union variable
    int *p4 = &u.a;
    char *p5 = &u.b;
    float *p6 = &u.c;
    // printing the address values of structures 
    printf("Structure Variables memory location\na : %p\tb : %p\tc : %p\nUnions Variables memory locatiion\na : %p\tb : %p\tc : %p\n",p1,p2,p3,p4,p5,p6);
}