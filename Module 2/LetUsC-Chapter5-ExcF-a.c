#include <stdio.h>

float func(int a, float b);

int main()
{
	
	int a;
	float b;
	
	printf("\nEnter an int and float:\n");
	scanf("%d %f", &a, &b);
	
	float result = func(a,b);
	
	printf("%f",result);

	return 0;
}

float func(int a, float b)
{
	return a * b;
}



