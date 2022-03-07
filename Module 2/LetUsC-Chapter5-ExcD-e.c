#include <stdio.h>

int main()
{

	int num;
	
	printf("\nEnter a number:\n");
	scanf("%d", &num);
	
	findPrimeFactors(num);

	return 0;
}

void findPrimeFactors(int num)
{
	int i;
	int temp = num;
	
	while(temp > 1)
	{
		for(i = 2; i < num/2; i++)
		{
			if(temp%i == 0)
			{
				printf("%d ", i);
				temp/=i;
				break;
			}
		}
	}
}


/*Calculations

num = 24

24/2 = 12

12/2 = 6
6/2 = 3
3/2 => not divisible
3/3 = 1

*/

