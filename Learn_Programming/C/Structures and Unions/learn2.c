#include <stdio.h>


struct
{
    char name[20];
    int age;
    float height;
    char sex[10];
}bot;

void main()
{
    int bots;
   printf("Enter How many bot do you want to make : ");
   scanf("%d",&bots);
   for ( int i = 1; i <= bots; i++)
   {
       printf("Name : ");
       scanf("%s",&bot.name);
       printf("Age : ");
       scanf("%d",&bot.age);
       printf("Height : ");
       scanf("%f",&bot.height);
       printf("Sex : ");
       scanf("%s",&bot.sex);
       printf("_____________________________\n");
   }



}