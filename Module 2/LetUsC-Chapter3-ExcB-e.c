/*
Write a program to print out all Armstrong numbers between
1 and 500. If sum of cubes of each digit of the number is
equal to the number itself, then the number is called an
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5
* 5 ) + ( 3 * 3 * 3 )
*/


#include <stdio.h>
#include <math.h>

/*
int main()
{
	int i = 0,val ;
	int dig1, dig2, dig3;
	int digits[3] = {0,0,0};
	double floorVal;
	int flooredInt;
	int cubedInt;
	double cubedDouble ;
	
	for(i = 100; i<500; i++)
	{
		val = i;
		
		
		digits[2]= (int)floor(val/100);
		val = val - digits[2]*100; 
		
		digits[1] = (int)floor(val/10);
		val = val - digits[1]*10;
		
		digits[0] = val;
		
	//	printf("\n\nThe 3 digits of %d is %d %d and %d", i,digits[0], digits[1], digits[2]);
		
		cubedDouble = pow(digits[2],3) + pow(digits[1],3) + pow(digits[0],3);
		cubedInt = (int)cubedDouble;
		
		if(cubedInt == i)
			printf("\nThe number %d is an Armstrong number",i);
			
		
		
		
	}
	
//	
//		val = 100;
//		
//		
//		digits[2]= (int)floor(val/100);
//		val = val - digits[2]*100; 
//		
//		digits[1] = (int)floor(val/10);
//		val = val - digits[1]*10;
//		
//		digits[0] = val;
//		
//		printf("\n\nThe 3 digits of %d is %d %d and %d", val,digits[0], digits[1], digits[2]);
	
	return 0;
}
*/


/*Calculations

example num = 347

dig3 = 3rd dig = 347/100 = 3.47 = 3
num - dig3 * 100 = 47
dig2 = 47/10 = 4.7 = 4
num - dig2*10 = 7
dig 1 = 7
*/



