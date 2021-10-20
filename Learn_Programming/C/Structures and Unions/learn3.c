#include <stdio.h>

struct bot
{
    char *name;
    char *type;
    int age;
    float height;
}male, female;

void main(){

    male.name = "Mangal";
    male.age = 20;
    male.type = "noob";
    male.height = 5.6;
    printf("%s\n",male.name);
    printf("%d\n",male.age);
    printf("%s\n",male.type);
    printf("%f\n",male.age);
}