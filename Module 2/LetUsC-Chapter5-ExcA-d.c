#include <stdio.h>

int main()
{
	
	int i = 45,c;
	
	c = multiply(i*1000);
	printf("\n%d", c);
	
	return 0;
}

check(int ch)
{
	if(ch>=40000)
		return (ch/10);
	else
		return (10);
}
//undefined reference to `multiply'
