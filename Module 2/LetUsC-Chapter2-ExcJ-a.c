/*
Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.
(2) Whether a character entered through the keyboard is a
special symbol or not
*/


#include <stdio.h>

/*
int main()
{
	char c;
	printf("\nEnter a character from the keyboard:\n");
	scanf("%c",&c);
	
//	if(c >= 'a'&&c<='z')
//		printf("The character is a lowercase alphabet between a and z.\n");
//	else
//		printf("The character is not a lowercase alphabet between a and z\n");
		
//	if((c >=0 && c<=47) || (c>=58 && c<=64)|| (c>=91&&c<=96) ||(c>=123&&c<=127) )
//		printf("The character is a special symbol");
//	else
//		printf("The character is NOT a Special symbol");
//		

	c>='a'&&c<='z'?printf("The character is a lowercase alphabet between a and z.\n"): printf("The character is not a lowercase alphabet between a and z\n");
	
	((c >=0 && c<=47) || (c>=58 && c<=64)|| (c>=91&&c<=96) ||(c>=123&&c<=127) )?printf("The character is a special symbol"):printf("The character is NOT a Special symbol");
	

	
	return 0;
}*/
