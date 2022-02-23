/*Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for
various characters.
Characters ASCII Values
A – Z
a – z
0 – 9
special symbols
65 – 90
97 – 122
48 – 57
0 - 47, 58 - 64, 91 - 96, 123 - 127
*/


#include <stdio.h>

/*
int main()
{
	char ourChar;
	
	printf("\nEnter any character on the keyboard\n");
	scanf("%c", &ourChar);
	
	if(ourChar >= 65 && ourChar <=90)
		printf("The character %c is an uppercase alphabet", ourChar);
	else if(ourChar >= 97 && ourChar <= 122)
		printf("The character %c is a lowercase alphabet", ourChar);
	else if(ourChar >= 48 && ourChar <=57)
		printf("The character %c is a number between 0 and 9", ourChar);
	else if((ourChar >= 0 && ourChar<=47 ) || (ourChar >= 58 && ourChar <=64) || (ourChar >= 91 && ourChar <= 96) || (ourChar>=123 && ourChar<=127) )
		printf("The character %c is a special symbol", ourChar);
	else
		printf("Unknown character encountered");
	
	
	return 0;
}
*/
