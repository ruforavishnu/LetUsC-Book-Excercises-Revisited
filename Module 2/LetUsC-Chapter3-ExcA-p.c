#include <stdio.h>

int main()
{
	int x= 4, y =0,z;
	
	while(x>=0)
	{
		if(x==y)
			break;
		else
			printf("\n%d %d",x,y);
		
		x--;
		y++;
	}
	
	return 0;
}
/*
Calculations

x=4, y=0
Out: 4 0
x = 3, y = 1
out : 3 1
x=2, y = 2

----
4 0
3 1
*/
