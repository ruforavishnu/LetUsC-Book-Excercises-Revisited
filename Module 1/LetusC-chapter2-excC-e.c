/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int number;
	int orginalNumber = 0;
	
	printf("Enter a number between 10,000 and 99,000\n");
	scanf("%d", &number);
	
	orginalNumber = number;
	
	int digits[5];
	
	if(number < 10000 || number > 99000 )
	{
		printf("\nEnter a 5 digit number. Exiting program due to incorrect input...");
		return 0;
	}
		
	
	int i;
	for(i = 0; i < 5; i++)
	{
		digits[i]= number%10;
		number = number/10;
		number = floor(number);		
		printf("\nDigit at %dth position is %d", (5-i), digits[i] );
	}
	
	char str[20] = "";
	char revStr[20] = "";
	
	
	itoa(orginalNumber, str, 10);
	//*revStr = strrev(str);
	
	
	printf("\nPrinting integer as string :%s", str);
	printf("\nPrinting reversed integer as string :%s", strrev(str));
	
//	
//	int j = 0;
//	int decimalPlaceValue = 10000;
//	int reversedNumber = 0;
//	int countZeroes = 0;
//	
//	for(j = 0; j < 5; j++)
//	{
//		if(digits[j]!=0)
//		{
//			reversedNumber += digits[j]*decimalPlaceValue;
//			decimalPlaceValue /= 10;
//			
//		}
//		else
//		{
//			//reversedNumber += decimalPlaceValue;
//			decimalPlaceValue /= 10;
//			countZeroes++;
//			
//		}
//	}
//	
//	if(countZeroes == 0)
//		printf("\nReversed number is %d ", reversedNumber);
//	else
//	{
//		printf("\nReversed number is ");
//		int k;
//		for(k=0; k < countZeroes;k++)
//			printf("0");
//		printf("%d", reversedNumber);
//	}
	
//	if(orginalNumber == reversedNumber)
//		printf("\nNumber and Reversed number are the SAME");
//	else 
//		printf("\nNumber and Reversed number are NOT the same");
	
	
	return 0;
}

/*
Lets think about the problem.

Take a sample 5 digit number. Say, 23579
How do I get the last digit of 23579 ?

If I divide 23579 by 10 I get 2357.9
Now if I find the decimal value I get 0.9.  Multiplied by 10 I get 9.

Or lets think of another method.

What will happen if I mod 23579 by 10. Lets use calculator and come back here. 
Ohh, I get 9.

Lets see what happens if I mod 23579 by 100. Lets use calculator and come back here. 
23579 mod 100 = 79.

What if I divide that number 23579 by 10 and floor it . I get 2357.9 => 2357.0 = 2357
What if I repeat the same. I mod 2357 mod 10 , I should get 7 right?
Rinse and repeat.




*/
