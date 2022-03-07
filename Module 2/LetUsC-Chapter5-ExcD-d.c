#include <stdio.h>

int main()
{

	int year;
	
	printf("\nEnter year:\n");
	scanf("%d", &year);
	
	int result = isLeapYear(year);

	if(result == 1)
		printf("%d is a leap year",year);
	else
		printf("%d is NOT a leap year",year);

	return 0;
}


int isLeapYear(int year)
{
	if(year%4==0)
		return 1;
	else
		return 0;
}

