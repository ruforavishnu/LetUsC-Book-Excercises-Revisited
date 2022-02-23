/*An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.

Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured
*/

#include <stdio.h>
#include <string.h>
/*
int main()
{
	int age = 0;
	int salary = 0;
	int premium = 0;
	
	char location[10] = "city";
	char sex[5] = "M";
	char health[15] = "excellent";
		
	
			
	printf("\nEnter age of person\n");
	scanf("%d", &age);
	
	printf("\nEnter the sex of the person: M/F \n");
	scanf("%s", &sex);
	//gets(sex);
	//sex = getch();
	
	printf("\nInput variables: sex:%s", sex);
	//printf("\nInput variables length: strlen sex:%d", strlen(sex));
	//return 0;
	
	
	printf("Enter location: city/village\n");
	scanf("%s", &location);
	
	printf("Enter health as : poor/excellent\n");
	scanf("%s", &health);
	
	printf("Enter the person's salary\n");
	scanf("%d", &salary);
	
	printf("\n\nInput variables: age:%d", age);
	printf("\nInput variables: sex:%s", sex);
	printf("\nInput variables: location:%s", location);
	printf("\nInput variables: health:%s", health);
	printf("\nInput variables: salary:%d\n\n", salary);
	
	
		
	
		
	
	if( strcmp(health,"excellent")==0  && (age>=25 && age <= 35) && strcmp(location,"city")==0 && sex[0] == 'M')
	{
		int a = salary/1000;
		premium = a * 4;
		printf("\nPerson is insured.\nHis premium is %d and Policy amount cannot exceed Rs. 2 lakhs.\n", premium);
	}
	else if(strcmp(health,"excellent")==0 && (age>=25 && age <= 35) && strcmp(location,"city")==0 && sex[0] =='F' )
	{
		int a = salary/1000;
		premium = 3 * a;
		printf("Person is insured.\n The premium is %d and Policy amount cannot exceed Rs. 1 lakh.\n", premium);
		
	}
	else if(strcmp(health,"poor")==0 && (age>=25 && age <= 35) && strcmp(location,"village")==0 && sex[0] =='M')
	{
		int a = salary/1000;
		premium = 6 * a;
		printf("Person is insured.\n His premium is %d and Policy amount cannot exceed Rs. 10,000.\n", premium);
		
	}
	else
	{
		printf("Person is not insured");
	}

	return 0;	
}

*/
