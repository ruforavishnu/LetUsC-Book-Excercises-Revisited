/*
In a company, worker efficiency is determined on the basis of
the time required for a worker to complete a particular job. If
the time taken by the worker is between 2 – 3 hours, then the
worker is said to be highly efficient. If the time required by
the worker is between 3 – 4 hours, then the worker is ordered
to improve speed. If the time taken is between 4 – 5 hours, the
worker is given training to improve his speed, and if the time
taken by the worker is more than 5 hours, then the worker has
to leave the company. If the time taken by the worker is input
through the keyboard, find the efficiency of the worker
*/

#include <stdio.h>

int main()
{
	int timeTaken = 0;
	int hours = 0;
	int remainder = 0;
	
	float mins = 0.0;	
	float total = 0.0;
	
	printf("\nEnter the time taken by the employee to complete the job in minutes.\n");
	scanf("%d", &timeTaken);
	
	printf("\n\nInput variables:\t timeTaken:%d", timeTaken);
	
	hours = timeTaken/60;
	remainder = timeTaken%60;
	mins = remainder/60.0;
	total = hours+mins;
	
	printf("\n\nCalculated variables:\t hours:%d\tremainder:%d\tmins:%f\ttotal:%f", hours,remainder,mins,total);
	printf("\nHours:%d", hours);
	printf("\nRemainder:%d", remainder);
	printf("\nMins:%f", mins);
	printf("\ntotal:%f",total);
	printf("\n\n");
	
	
	
	if( total<=3.0)
		printf("\nVery efficient employee!");
	else if(total>3.0 && total<=4.0)
		printf("\nEmployee has to improve speed!");
	else if(total>4.0 && total<=5.0)		
		printf("\nEmployee has to be given training to improve speed!");
	else if(total>5.0 )				
		printf("\nEmployee has to be fired!");
	
	
	return 0;
}
