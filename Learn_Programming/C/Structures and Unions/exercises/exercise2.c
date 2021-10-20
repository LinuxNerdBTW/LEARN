/*
Writa a program that reads name and marks of 10 students. Display data according to marks in descending order.
*/

#include <stdio.h>
#include <string.h>
void main(){
    char temp_name[20];
    int temp_marks;
    struct data{
        char name[20];
        int marks;
    }stds[10];

    for ( int count = 0 ; count < 10; count++){
        printf("Name : ");
        scanf("%s",&stds[count].name);
        printf("Marks : ");
        scanf("%d",&stds[count].marks);
        printf("\n");
    }

    for ( int i = 0; i < 10; i++){
        for ( int j = 0; j < 10; j++){
            if (stds[i].marks < stds[j].marks){ // for ascending order just use > operator 
                temp_marks = stds[i].marks;
                stds[i].marks = stds[j].marks;
                stds[j].marks = temp_marks;
                strcpy(temp_name, stds[i].name);
                strcpy(stds[i].name, stds[j].name);
                strcpy(stds[j].name, temp_name);
            }
        }
    }
    printf("Name and mark in descending order according to the marks ...\n");
    for ( int i = 0; i < 10; i++){
        printf("\tName : %s\tMarks : %d\n",stds[i].name,stds[i].marks);
    }
}


