// array of structure

#include <stdio.h>

// structure definition 
struct learn6
{
    char name[20];
    int age;
};
void main()
{
    struct learn6 l[10];
    // getting the value from the user 
    for ( int i = 1; i <= 10; i++)
    {
        printf("Name : ");
        scanf("%s",&l[i].name);
        printf("Age : ");
        scanf("%d",&l[i].age);
        printf("\n");
    }
    printf("\n");

    // printing in the screen 

    for ( int i = 1; i <= 10; i ++)
    {
        printf("Name : %s\nAge : %d\n",l[i].name,l[i].age);
    }
}