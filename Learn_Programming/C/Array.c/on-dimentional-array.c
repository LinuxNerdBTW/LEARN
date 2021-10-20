// program to demostrate the one dimentional array on C 

#include <stdio.h>
int main()
{
    // float variable declaration     
    float marks[5], sum = 0, avg;

    // lets iterate the input of marks from user : 
    int i;
    for ( i = 1 ; i <= 5; i++)
    {
        printf("Enter Marks %d : \n",i);
        scanf("%f",&marks[i]);
        sum += marks[i];
    }

    // average point calculation 
    avg = sum / i ; 
    printf("Sum : %.2f\n",sum);
    printf("Average : %.2f\n",avg);
    
    return 0;
}