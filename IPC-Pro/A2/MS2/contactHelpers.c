//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
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
	scanf("%d%c", &validInt, &NL);
	while (NL != '\n')
	{
		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &validInt, &NL);
	}

	return (validInt);
}

// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max)
{
	int validInt; // value used to check if it is in range of min and max
	validInt = getInt(); // calls getInt and returns a valid integer from user input
	while (validInt > max || validInt < min)
	{
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		validInt = getInt();
	}
	return (validInt);
}


// yes: Empty function definition goes here:
int yes(void)
{
	int track = 1;
	char validAnswer;
	char NL;
	scanf("%c%c", &validAnswer, &NL);
	while (track)
	{
		while (NL != '\n')
		{
			clearKeyboard();
			printf("***INVALID ENTRY * **<Only(Y)es or (N)o are acceptable>: ");
			scanf("%c%c", &validAnswer, &NL);
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
			printf("***INVALID ENTRY * **<Only(Y)es or (N)o are acceptable>: ");
			NL = 'x';
			break;
		}
		return (0);
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
	return (option);
}


// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void)
{
	int option;
	int exit = 2;

	do {
		option = menu();

		switch (option)
		{
		case 1:
			printf("<<< Feature 1 is unavailable >>>\n\n");
			pause();
			break;

		case 2:
			printf("<<< Feature 2 is unavailable >>>\n\n");
			pause();
			break;

		case 3:
			printf("<<< Feature 3 is unavailable >>>\n\n");
			pause();
			break;

		case 4:
			printf("<<< Feature 4 is unavailable >>>\n\n");
			pause();
			break;

		case 5:
			printf("<<< Feature 5 is unavailable >>>\n\n");
			pause();
			break;

		case 0:
			printf("Exit the program? (Y)es/(N)o: ");
			exit = yes();
			break;

		default:
			break;

		}

	} while (exit != 1);
	printf("Contact Management System: terminated\n");
}

