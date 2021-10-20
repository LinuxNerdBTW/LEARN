// program to take information from user and store them in txt file 

#include <stdio.h>

void main()
{
    // variable declaratiion 
    char name[20];
    int age;
    float height;
    // file poiter variable declaration 
    FILE *file;
    // opening file for writing onto it 
    file = fopen("info.txt","w");

    printf("Input User Details : \n");
    printf("Name : ");
    scanf("%s",&name);
    printf("Age : ");
    scanf("%d",&age);
    printf("Height : ");
    scanf("%f",&height);
    printf("\n");

    fprintf(file,"\nName : %s\nAge : %d\nHeight : %f\n",name,age,height);


    fclose(file);

}