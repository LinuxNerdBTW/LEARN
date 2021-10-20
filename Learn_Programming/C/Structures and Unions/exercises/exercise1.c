/* 
Write a c program that reads roll_no, f_name, l_name and prints the records on the screen.
*/
#include <stdio.h>
struct data
{
    char f_name[20];
    char l_name[20];
    int roll_no;
};

void run(struct data stds)
{
    printf("First Name : ");
    scanf("%s", &stds.f_name);
    printf("Last Name : ");
    scanf("%s",&stds.l_name);
    printf("Roll No. : ");
    scanf("%d",&stds.roll_no);
    printf("\tInformation About Student\n");
    printf("\t\tFirst Name : %s\n",stds.f_name);
    printf("\t\tLast Name : %s\n",stds.l_name);
    printf("\t\tRoll No. : %d\n",stds.roll_no);
}

void main()
{
    struct data stds;
    run(stds);

}