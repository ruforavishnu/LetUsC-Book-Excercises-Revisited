#include <stdio.h>

int main()
{
	
	int i = 1;
	switch(i-2)
	{
		case -1:
			printf("\nFeeding fish");
		case 0 :
			printf("\nWeeding grass");
		case 1:
			printf("\nMending roof");
		default:
			printf("\nJust to survive");
	}
}
