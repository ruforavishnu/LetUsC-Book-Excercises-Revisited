#include <stdio.h>

int main()
{
	
	int x,i;
	float term = 0.0;
	
	float var1, var2;
	
	printf("Enter x:\n");
	scanf("%d", &x);
	
	

	
	for(i=1; i<=7; i++)
	{
		if(i == 1)
			term = term +  ( (float) (x - 1)/ (float)x );
		else
		{
			var1 = ( (float) (x-1) ) / (float) (x);
			var2 = pow(var1, i);
			term = term + (0.5 * var2);
			
			
			//term = term + ( 1/2 * pow( ( (float) (x - 1)/ (float)x ), (float)i) );
		}
		
	}
	
	printf(" Sum of first 7 terms is : %f", term);
	return 0;
}
