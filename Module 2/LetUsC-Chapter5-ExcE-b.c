#include <stdio.h>

int main()
{

	void slogan();
	int c= 5;
	c = slogan();
	printf("\n%d",c);

	return 0;
}

void slogan()
{
	printf("\nOnly He men use C");
}

//	[Error] void value not ignored as it ought to be
