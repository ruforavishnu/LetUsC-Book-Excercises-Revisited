
/*
Write a program to find the octal equivalent of the entered
number
*/
#include <stdio.h>

/*
int main()
{
	int num = 0;
	printf("\nEnter the decimal number\n");
	scanf("\n%d", &num);
	
	int octalValue[10] = {0};
	int i=0;
	int mod, quo;
	
	printf("\n\nThe octal value of %d is: ", num);
	while(num!=0)
	{
		quo = num/8;
		mod = num%8;
		num = quo;
		printf("\nThe octal digit is %d ",mod);
		octalValue[i]	= mod;
		i++;
	}
	
	printf("\n\nThe final octal value is: ");
	while(i>=0)
	{
		printf("%d",octalValue[i]);
		i--;
	}
	
	
	return 0;
}
*/

/*Calculations

0 = 0
1 = 1
.
.
7 = 7
8 = 10
9 = 11

*/
