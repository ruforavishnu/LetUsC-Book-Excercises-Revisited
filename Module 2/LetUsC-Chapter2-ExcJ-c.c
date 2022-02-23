#include <stdio.h>

int main()
{
	int a,b,c,biggest;
	
	printf("\nEnter three numbers\n");
	scanf("%d %d %d", &a,&b,&c);
	
	printf("\nInput variables: a:%d\tb:%d\tc:%d", a,b,c);
	
//	if(a>b && a>c)
//		biggest = a;
//	else if(b>a && b>c)
//		biggest = b;
//	else
//		biggest = c;
		
	(a>b && a>c)?(biggest=a):(b>a&&b>c)?(biggest=b):(biggest=c);
	
		
	printf("\nBiggest value is %d", biggest);
		
	
	
	return 0;
}
