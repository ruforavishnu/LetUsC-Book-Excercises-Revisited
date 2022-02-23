#include <stdio.h>

int main()
{
	int a = 3, b = 4,c;
	
	c= b-a;
	
	switch(c)
	{
		case 1||2:
			printf("\nGod gave me an opportunity to change things");
			break;
		
		case a||b:
			printf("\nGod gave me an opportunity to run my show");
			break;
	}
	
	return 0;
}

//	[Error] case label does not reduce to an integer constant
