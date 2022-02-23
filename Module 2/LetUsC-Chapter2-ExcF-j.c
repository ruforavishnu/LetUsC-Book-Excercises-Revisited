/*The policy followed by a company to process customer orders
is given by the following rules:
(a) If a customer order is less than or equal to that in stock
and has credit is OK, supply has requirement.
(b) If has credit is not OK do not supply. Send him
intimation.
(c) If has credit is Ok but the item in stock is less than has
order, supply what is in stock. Intimate to him data the
balance will be shipped.
Write a C program to implement the company policy
*/

#include <stdio.h>

int main()
{
	int order=0;
	int credit = 0;
	int stock = 0;
	
	printf("\nEnter stock qty\n");
	scanf("%d", &stock);
	
	printf("\nEnter order and credit \n");
	scanf("%d %d", &order, &credit);
	
	printf("\n\nInput variables:\torder:%d\tstock:%d\tcredit:%d\n\n", order,stock, credit);
	
	if(order<=stock && credit==1)
		printf("Supply has requirement.\n");
	else if(order > stock && credit==1)
	{
		//eg..orders = 150, stock = 100. balance = 150-100 = 50. 
		int balance = order - stock;
		printf("In order of %d a total amount of %d has been shipped, the remaining %d shall be sent to you in the following week. ",order,stock, balance);
	}
	else if(credit == 0)
		printf("Credit is not okay. Consider this as an intimation.");
		
	
	
	
	
	
	
	
	return 0;
}
