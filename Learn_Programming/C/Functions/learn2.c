// Function with arguments and but no return values 
#include <stdio.h>

void person_data(char name[], int age, float height, char sex[6],char bloodgroup);

void main()
{
    printf("User Information : \n");
    person_data("Mangal Lopchan", 20, 5.8, "Male", 'O');
}

void person_data(char name[], int age, float height, char sex[6], char bloodgroup)
{
    printf("Name : %s\n",name);
    printf("Age : %d\n",age);
    printf("Height : %.2f\n",height);
    printf("Sex : %s\n",sex);
    printf("Blood Group : %c\n",bloodgroup);
}