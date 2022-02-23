/*
Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and
zeros entered.
*/
#include <stdio.h>

/*
int main()
{
	int inputValues[100] = {0};
	int i = -1, count = 0;
	
	
	printf("Keep on entering numbers one by one. Type in -100 to exit.");
	
	while(1)
	{
		++i;
		printf("\nEnter a number\n");
		//inputValues[i]= getch();
		scanf("%d",&inputValues[i] );	
		++count;
		if(inputValues[i] == -100)
			break;
	}

	for(i = 0; i <count; i++)
	{
		if(inputValues[i]	< 0)
			printf("\n%d is a negative number.", inputValues[i]);
		else if(inputValues[i]	> 0)
			printf("\n%d is a positive number.", inputValues[i]);
		else
			printf("\n%d is zero.", inputValues[i]);
	}
	
	
	
	
	return 0;
}
*/
