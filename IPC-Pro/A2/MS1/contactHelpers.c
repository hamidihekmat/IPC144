//==============================================
// Name:           Hekmat Hamidi
// Student Number: 132645169
// Email:          hwhamidi@myseneca.ca
// Section:        NXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      1
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"
// This source file needs to "know about" the functions you prototyped
//       in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:



//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+

// clearKeyboard:  Empty function definition 
void clearKeyboard(void)
{
	while (getchar() != '\n')
		;  // makes sure the buffer is clears
}

// pause: Empty function definition goes here:
void pause(void)
{
	printf("(Press Enter to continue)");
	clearKeyboard();

}


// getInt: Empty function definition goes here:
int getInt(void)
{
	int validInt;
	char NL = 'x';
	scanf("%d%c", validInt, NL);
	while (NL != '\n')
	{
		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", validInt, NL);
	}
	return (validInt);
}


// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max)
{
	int validInt; // value used to check if it is in range of min and max
	validInt = getInt(validInt); // calls getInt and returns a valid integer from user input
	while (validInt < max || validInt > min)
	{
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		validInt = getInt(validInt);
	}
	return (validInt);
}

// yes: Empty function definition goes here:
int yes(void)
{
	int track = 1;
	char validAnswer;
	char NL;
	scanf("%c%c", validAnswer, NL);
	while (track)
	{
		while (NL != '\n')
		{
			clearKeyboard();
			printf("***INVALID ENTRY * **<Only(Y)es or (N)o are acceptable>: ");
			scanf("%c%c", validAnswer, NL);
		}
		switch (validAnswer)
		{
		case 'y':
			track = 0;
			return (1);
			break;
		case 'Y':
			track = 0;
			return (1);
			break;
		case 'n':
			track = 0;
			return (0);
			break;
		case 'N':
			track = 0;
			return (0);
			break;
		default:
			track = 1;
			break;
		}
	}

}

// menu: Empty function definition goes here:
int menu(void)
{
	int option;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\nSelect an option : ");
	option = getIntInRange(0, 6);
}

// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void)
{

}