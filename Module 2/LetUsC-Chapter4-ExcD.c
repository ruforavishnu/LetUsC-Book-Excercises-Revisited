#include <stdio.h>

int main()
{
	int class, grace, failed;
	
	printf("Enter the students class obtained, number of exams failed\n");
	scanf("%d %d", &class, &failed);
	
	switch(class)
	{
		case 1:
			if(failed>3)
				grace = 0;
			else
				grace = 5;
			break;
		
		case 2:
			if(failed > 2)
				grace = 0;
			else
				grace = 4;
			break;
			
		case 3:
			if(failed > 1)
				grace = 0;
			else
				grace = 5;
			break;
			
			
	}
	printf("\n\nThe student has received a grace marks of %d", grace);
	
	return 0;
}
