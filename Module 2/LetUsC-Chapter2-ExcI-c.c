#include <stdio.h>

int main()
{
	float sal;
	printf("\nEnter the salary\n");
	scanf("%f", &sal);
//	if(sal <40000 && sal>25000)
//		printf("Manager");
//	else 
//		if(sal<25000&&sal>15000)
//			printf("Accountant");
//		else
//			printf("Clerk");
			
	sal<40000&&sal>25000?printf("Manager"):sal<25000&&sal>15000?printf("Accountant"):printf("Clerk");
	
	return 0;
}
