#include <stdio.h>


/*

int main()
{
	int factors[] ={2,3,4,5,7,11,13,17,19};
	
	int num,i;
	int len = sizeof(factors)/sizeof(factors[0]);
	
	printf("Length of array is %d", len);
	int j;
	int desiredList[50] = {0};
	int count = 0;
	int isPrime = 1;
	
	for(i=4; i<300; i++)
	{
		isPrime = 1;
		
		for(j=2; j<= i/2; j++)
		{
		
			if( i % j == 0 )//i is not prime
			{
				isPrime = 0;//set a flag, the number is not prime.			
				break;
			}
		}	
		
		if(isPrime == 1)
		{
			desiredList[count] = i;
			++count;
		}
		
	}
	
	
	
	printf("\n\nThe prime numbers between 0 and 300 are:\n Prime number: 2\nPrime number: 3");
	
	for(i = 0; i<count; i++)
	{
		printf("\nPrime number: %d", desiredList[i]);
	}
	
	

	return 0;
}

*/

/*Calculations


eg : num = 152

is 152 dividable by 2 => yes , not prime

num 153. is 152 dividable by 2 , no, then try next factor
is 153 dividable by 3 yes, not prime

like that
*/
