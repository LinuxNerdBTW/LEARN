#include <stdio.h>

int main(){
	// taking 10 input from users
	int salary[10],count,i;
	for ( i = 1; i <= 10; i++ )
	{
		printf("Salary %d : ",i);
		scanf("%d",&salary[i]);
	}
	// checking the condition;
	for ( i = 1; i <= 10; i++ )
	{
		if (salary[i] >= 5000 && salary[i] <= 10000)
		{
			printf("Found %d : \n",i);
			count ++;
		}
	}
	// printing the count
	printf("Total Employee having salary from 5000 to 10000 : %d\n",count);




	return 0;
}
