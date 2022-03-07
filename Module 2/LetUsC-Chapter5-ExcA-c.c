#include <stdio.h>

int main()
{
	int i = 45,c;
	
	c = check(i);
	printf("\n%d", c);
	
}

check(int ch)
{
	if(ch>=45)
		return (100);
	else
		return (10*10);
}
