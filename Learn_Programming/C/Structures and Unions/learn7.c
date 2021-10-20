// structures and functions 
#include <stdio.h>

struct variables
{
    int num1;
    int num2;
    int sum;
};

void add(struct variables v1)
{
    v1.num1 = 10;
    v1.num2 = 20;
    v1.sum = v1.num1 + v1.num2;
    printf("SUM : %d\n",v1.sum);
}

void main()
{
    struct variables v1;
    add(v1);
}