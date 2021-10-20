/*
A C program that reads different names and addresses into the computer and sorts the names into alphabetical order using structure
variables.
*/
#include <stdio.h>
#include <string.h>
void main()
{
	char temp_name[25],temp_add[30];
	int i, j,n;
	struct person
	{
		char name[25];
		char add[30];
	}p[200];
	printf("Input the number of persons : ");
	scanf("%d",&n);
	for ( i  = 0; i < n; i++)
	{
		printf("Input Name and Address : ");
		scanf("%s%s",p[i].name,p[i].add);
	}

	for ( i = 0; i < n; i++)
	{
		for ( j = i + 1; j < n; j++)
		{
			if ( strcmp(p[i].name, p[i].name) > 0)
			{
				strcpy(temp_name,p[i].name);
				strcpy(p[i].name,p[j].name);
				strcpy(p[j].name, temp_name);
				strcpy(temp_add,p[i].add);
				strcpy(p[i].add,p[j].add);
				strcpy(p[j].add,temp_add);
			}
		}
	}
	printf("\nName and Address according to the alphabetical order of name " ) ;
	for (  i = 0; i < n; i++)
	{
		printf("\nName = %s\tAddress = %s",p[i].name,p[i].add);
	}
}

