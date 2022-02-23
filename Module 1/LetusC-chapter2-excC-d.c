/*According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1st January of
this year*/


#include <stdio.h>

/*
int main()
{
	
	int year = 0;
	
	printf("Enter a year later than 1900 and less than 2100\n");
	scanf("%d",&year);
	
	int i = 0;
	int diff = year - 1900;
	int currentYear = 0;
	int totalLeapYears = 0;
	for(i = 0; i<diff; i++)
	{
		currentYear = 1900+i;
		if(currentYear%4==0&&currentYear!=1900)
			totalLeapYears++;
			
		
	}
	
	printf("\nTotal leap years: %d\n", totalLeapYears);
	
	int totalDays = diff * 365;
	int num = totalDays+totalLeapYears;
	int mod = num % 7;
	char *dayOfWeek[7] = {"Monday","Tuesday", "Wednesday", "Thursday","Friday","Saturday","Sunday"};
	
	if(mod%7==0)
	{
		printf("1 January %d is a %s", year, dayOfWeek[0]);
	}
	else if(mod%7==1)
	{
		printf("1 January %d is a %s", year, dayOfWeek[1]);
	}
	else if(mod%7==2)
	{
		printf("1 January %d is a %s", year, dayOfWeek[2]);
	}
	else if(mod%7==3)
	{
		printf("1 January %d is a %s", year, dayOfWeek[3]);
	}
	else if(mod%7==4)
	{
		printf("1 January %d is a %s", year, dayOfWeek[4]);
	}
	else if(mod%7==5)
	{
		printf("1 January %d is a %s", year, dayOfWeek[5]);
	}
	else if(mod%7==6)
	{
		printf("1 January %d is a %s", year, dayOfWeek[6]);
	}
	
	
	
	return 0;
}*/


/*
	Let's think about it.
	1 January 1900 is a monday.
	So what will be 1 January 1901 ?
	
	How do we find that?
	Maybe lets calculate the number of days since 1901 Jan 1 and 1900 Jan 1.
	Differrence in days = 365
	Now lets mod 7 the number 365
	365 mod 7 = 1
	Means it is 1 day plus Monday which means it is Tuesday.
	
	Lets try that again
	1 Jan of 1903 => ( 365x3 ) mod 7 ==> 3 ==> Monday + 3 = Thursday
	
	
	Now lets try a further down year, say 1987
	1 January 1987 = ((365*87) + (number of leap years beteween 1900 and 1987) ) mod 7 
	
	
	
	
	
	
	*/
