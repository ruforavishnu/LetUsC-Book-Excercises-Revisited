/*Logical Operators
If a = 10, b = 12, c = 0, find the values of the expressions in
the following table:
Expression Value

a != 6 && b > 5
a == 9 || b < 3
! ( a < 10 )
! ( a > 5 && c )
5 && c != 8 || !c

*/
#include <stdio.h>

int main()
{
	int a = 10, b = 12, c = 0;
	
	//printf("Value of (a != 6 && b > 5) is %d",(a != 6 && b > 5) );
	//printf("Value of (a == 9 || b < 3) is %d", (a == 9 || b < 3));
	//printf("Value of (! ( a < 10 )) is %d", (! ( a < 10 )));
	//printf("Value of (! ( a > 5 && c )) is %d", (! ( a > 5 && c )));
	printf("Value of (5 && c != 8 || !c) is %d", (5 && c != 8 || !c));
	
	
	
	return 0;
}
