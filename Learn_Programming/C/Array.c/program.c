// a program to read a salaries of 20 employees and 
// count a number of employees getting a salaries from 5000 to 10000

#include <stdio.h>

void main()
{
    int salary[20],count=0,i;

    // getting employees salaries input 
    for ( i = 1 ; i <= 20; i++)
    {
        printf("Salary of employee %d : ",i);
        scanf("%d",&salary[i]);
    }


    for ( i = 1 ; i <= 20; i++)
    {
        if (salary[i] >= 5000 && salary[i] <= 10000)
        {
            count++;
        }
        else
        {
            printf("None\n");
        }
    }



}