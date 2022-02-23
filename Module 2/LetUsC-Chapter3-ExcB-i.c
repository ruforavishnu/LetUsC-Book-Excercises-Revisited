/*
Write a program to find the range of a set of numbers. Range
is the difference between the smallest and biggest number in
the list
*/

#include <stdio.h>

int main()
{
	int values[10]={0};
	
	int i = 0;
	while(i<10)
	{
		printf("\nEnter a number\n");
		scanf("%d", &values[i]);
		i++;
	}
	
	i=0;
	printf("\n\nThe numbers are: ");
	while(i<10)
	{
		printf("%d ", values[i]);
		i++;
	}
	
	int big=0, small=values[0];
	for(i = 0; i<10; i++)
	{
		if(values[i]>big)
			big = values[i];
		
		if(values[i]< small)	
			small = values[i];
	}
	
	printf("\nThe biggest numer is %d and the smallest number is %d",big,small);
	
	int range = big - small;
	printf("\nThe range is %d", range);
	
	
	
	
	
	
	return 0;
}
