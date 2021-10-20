/* 
A program to store name, mark of students and to store the data according with marks in descending order and display them . 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // declaring the temp variables 
    char temp_name[20];
    int temp_marks;
    
    // defining structure for name, mark of student 
    struct students {
        char name[20];
        int marks;
    }s[20];
    // using for loop for getting input of 20 students from students . 
    for ( int count = 1; count <= 20; count++)
    {
        printf("Student name %d : ",count);
        scanf("%s",&s[count].name);
        printf("Mark Obtained by %d : ",count);
        scanf("%d",&s[count].marks);
        printf("\n");
    }

    // printing out the values in descending order 

    for ( int i = 1; i <= 20; i++)
    {
        for ( int j = 1; j <= 20; j++)
        {
            if ( s[i].marks > s[j].marks)
            {
                temp_marks = s[i].marks;
                s[i].marks = s[j].marks;
                s[j].marks = temp_marks;
                strcpy(temp_name,s[i].name);
                strcpy(s[i].name,s[j].name);
                strcpy(s[j].name,temp_name);
            }
        }
    }

    printf("\nNames and mark according to the descending order of mark\n");

    for ( int i = 1; i <= 20; i++)
    {
        printf("Name = %s\tMark = %d\n",s[i].name,s[i].marks);
    }

}