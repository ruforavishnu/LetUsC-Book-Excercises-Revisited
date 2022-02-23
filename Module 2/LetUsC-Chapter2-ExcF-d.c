/*Question: A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel
under consideration and output the grade of the steel.
*/

#include <stdio.h>
/*
int main()
{
	int hardness = 0;
	int tensileStrength = 0;
	
	float carbonContent = 0.0;
	
	printf("\nEnter hardness of the steel\n");
	scanf("%d", &hardness);
	
	printf("\nEnter Carbon content of the steel\n");
	scanf("%f", &carbonContent);
	
	printf("\nEnter Tensile strength of the steel\n");
	scanf("%d", &tensileStrength);
	
	printf("\n\nInput variables:\nHardness=%d\tCarbon Content=%f\tTensile Strength=%d\n\n", hardness, carbonContent, tensileStrength);
	
	if(hardness>50 && carbonContent< 0.70 && tensileStrength > 5600 )
		printf("The steel is of Grade 10 quality");
	else if(hardness > 50 && carbonContent <0.70 && tensileStrength<=5600)
		printf("The steel is of Grade 9 quality");
	else if(hardness <= 50 && carbonContent <0.70 && tensileStrength>5600)
		printf("The steel is of Grade 8 quality");
	else if(hardness > 50 && carbonContent > 0.70 && tensileStrength>5600)
		printf("The steel is of Grade 7 quality");
	else if(hardness > 50 || carbonContent < 0.70 || tensileStrength>5600)
		printf("The steel is of Grade 6 quality");
	else 
		printf("The steel is of Grade 5 quality");
		
		
	return 0;
}
*/
