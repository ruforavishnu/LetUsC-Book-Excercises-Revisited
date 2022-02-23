/*
Write a program for a matchstick game being played between
the computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4
matchsticks.
- After the person picks, the computer does its
picking.
- Whoever is forced to pick up the last matchstick
loses the game.
*/

#include <stdio.h>

/*
int main()
{
	
	int remaining = 21;
	
	int UserInput, ComputerInput;
	
	
	
	while(remaining > 0)
	{
		printf("\n\nThere are %d matchsticks remaining \n\n", remaining);
		printf("\nHow many matchsticks do you want to pick. Options: 1,2,3,4\n");
		scanf("%d", &UserInput);
		printf("\nYou have chosen %d matchsticks", UserInput);
		remaining = remaining-UserInput;
		
		if(remaining == 0)
		{
			printf("\nYou have picked up the last matchstick. The computer wins.");
			break;
		}
		ComputerInput =  5 - UserInput;
		printf("\nComputers turn: Computer chooses %d matchsticks", ComputerInput);
		
		remaining = remaining - ComputerInput;
		
		
	}
	
		
	
	return 0;
}

*/

/*
Calculations:

There are total 21 matchsticks
The user can pick either 1,2,3 or 4 matchsticks

*/

