#include <stdio.h>



/*
int main()
{
	int choice;
	int n,fact = 1;
	int i;
	int temp = 1;
	int prime = 1;
	int exit = 0;
	while(1)
	{
		
		fact = 1;
		
		
		printf("\n\n1. Factorial");
		printf("\n2. Prime");
		printf("\n3. Odd or Even");
		printf("\n4. Exit");
		printf("\n\nYour choice?\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				
				printf("\nEnter number whose factorial has to be found\n");
				scanf("%d", &n);
				
				temp = n;
				while(temp>1)
				{
					fact = fact * temp;
					--temp;
				}
				printf("The factorial of %d is %d",n,fact );
				break;
			case 2:
				
				prime = 1;
				printf("Check if number is prime or not. Enter number:\n");
				scanf("%d",&n);
				
				for(i = 2; i < n/2; i++)
				{
					if(n%i == 0)
						prime = 0;
					
				}
				if(prime == 1)
					printf("\nThe number %d is a prime number.", n);
				else
					printf("\nThe number %d is NOT a prime number.", n);
				
				break;
			case 3:
				
				printf("Enter a number to check for Odd or even:\n");
				scanf("%d", &n);
				
				if(n%2==0)
					printf("The number %d is even", n);
				else
					printf("The number %d is odd", n);
				
				break;
			case 4:
				exit = 1;

				break;
			default:

				break;
		}		
		if(exit == 1)
			break;
	}
	printf("\n\nProgram exited");
	char c  = getch();
	
	
	return 0;
}
*/
