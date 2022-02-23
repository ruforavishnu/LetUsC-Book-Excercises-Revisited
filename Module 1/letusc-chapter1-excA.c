/*Which of the following are invalid variable names & Why?*/
/*Author Vishnu Ajit Date: 13/12/2021*/

#include <stdio.h>

void main()
{
	int BASICSALARY; //VALID
	//int #mean; //INVALID , compiler reason: stray '#' in program.
	//int population in 2006; // INVALID, compiler reason: Expected '=' or _attribute before 'in'.
	int FLOAT; 
	//int team'svictory; //INVALID, compiler reason: Missing terminating ' character.
	
	//int _basic;// VALID
	//int group.; //INVALID, compiler reason: Expected '=' or __attribute before '.' token.
	//int over time;//INVALID, compiler reason: Expected '=' or __attribute before 'time'.
	int hELLO;//VALID
	//int Plot # 3;//INVALID, compiler reason:  stray '#' in program.
	
	//int basic-hra;//INVALID, compiler reason: Expected '=' or __attribute before '-' token.
	//int 422;//INVALID, compiler reason: expected identifier or '(' before numeric constant.
	int mindovermatter;//VALID
	//int queue.;//INVALID, compiler reason: Expected '=' or __attribute before '.' token.
	//int 2015_DDay;//INVALID, compiler reason: Invalid suffix "_DDay on integer constant
	
	
	
	printf("Program to learn about valid variable names & invalid variable names completed execution.");
	
}
