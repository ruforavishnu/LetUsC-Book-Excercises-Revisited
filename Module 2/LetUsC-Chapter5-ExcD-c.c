#include <stdio.h>
#include <string.h>

int main()
{
	int year, roman;
	
	printf("\nEnter year to be converted to Roman numerals:\n");
	scanf("%d", &year);
	
	roman = romanifyNumber(year);


	return 0;
}

int romanifyNumber(int year)
{
	int index = 0;
	char str[20] ="";
	char tmp4[20] = "";
	char tmp3[20] = "";
	char tmp2[20] = "";
	char tmp1[20] = "";
	
	while(year>0)
	{
		int dig1 = year%10;
		year = (int)year/10;	
		++index;
		
		if(index == 1)
		{
			
		
			switch(dig1)
			{
				
				
				case 1:
					//tmp += "I";
					//strncat(dest,src,n);
					strncat(tmp4, "I", 1);
					break;
				case 2:
					//tmp = "II";
					strncat(tmp4, "II", 2);
					break;
				case 3:
					//tmp = "III"
					strncat(tmp4, "III", 3);
					break;
				case 4:
					//tmp = "IV";
					strncat(tmp4, "IV", 2);
					break;
				case 5:
					//tmp = "V";
					strncat(tmp4, "V", 1);
					break;
				case 6:
					//tmp = "VI";
					strncat(tmp4, "VI", 2);
					break;
				case 7:
					//tmp = "VII";
					strncat(tmp4, "VII", 3);
					break;
				case 8:
					//tmp = "VIII";
					strncat(tmp4, "VIII", 4);
					break;
				case 9:
					//tmp: "IX";
					strncat(tmp4, "IX", 2);
					break;
				case 0:
					break;
									
			}
			//printf("%s  ", tmp4);
		}
		else if(index == 2)
		{
			switch(dig1)
			{
				case 1:
					strncat(tmp3, "X", 1);
					break;
				case 2:
					strncat(tmp3, "XX", 2);
					break;
				case 3:
					strncat(tmp3, "XXX", 3);
					break;
				case 4:
					strncat(tmp3, "XL", 2);
					break;
				case 5:
					strncat(tmp3, "L", 1);
					break;
				case 6:
					strncat(tmp3, "LX", 2);
					break;
				case 7:
					strncat(tmp3, "LXX", 3);
					break;
				case 8:
					strncat(tmp3, "LXXX", 4);
					break;
				case 9:
					strncat(tmp3, "XC", 2);
					break;
				case 0:
					break;
					
			}
			
		}
		else if(index == 3)
		{
			switch(dig1)
			{
				case 1:
					strncat(tmp2, "C", 1);
					break;
				case 2:
					strncat(tmp2, "CC", 2);
					break;
				case 3:
					strncat(tmp2, "CCC", 3);
					break;
				case 4:
					strncat(tmp2, "CD", 2);
					break;
				case 5:
					strncat(tmp2, "D", 1);
					break;
				case 6:
					strncat(tmp2, "DC", 2);
					break;
				case 7:
					strncat(tmp2, "DCC", 3);
					break;
				case 8:
					strncat(tmp2, "DCCC", 4);
					break;
				case 9:
					strncat(tmp2, "CM", 2);
					break;
				case 0:
					break;
					
			}
			
		}
		else if(index == 4)
		{
			switch(dig1)
			{
				case 1:
					strncat(tmp1, "M", 1);
					break;
				case 2:
					strncat(tmp1, "MM", 2);
					break;
				case 3:
					strncat(tmp1, "MMM", 3);
					break;
				case 4:
					strncat(tmp1, "DM", 2);
					break;
				case 5:
					strncat(tmp1, "Vbar", 1);
					break;
				case 6:
					strncat(tmp1, "VbarD", 2);
					break;
				case 7:
					strncat(tmp1, "VbarDD", 3);
					break;
				case 8:
					strncat(tmp1, "VbarDDD", 4);
					break;
				case 9:
					strncat(tmp1, "DXbar", 2);
					break;
				case 0:
					break;
					
			}
			
		}
		
		
	
		
	}
		
	printf("The year in Roman numerals is %s %s %s %s",tmp1, tmp2, tmp3, tmp4);
	
	
	
}


/*Calculations

suppose year = 1987
first we want to get lsb = 7

for that we can divide 1987 by 10 => we will get 198.7

*/
