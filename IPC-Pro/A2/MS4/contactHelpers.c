//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      4
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>

// -------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"
#include "contacts.h"


// -------------------------------
// define MAXCONTACTS for sizing contacts array (5):
#define MAXCONTACTS 5



//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// Clear the standard input buffer
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause: Empty function definition goes here:
void pause(void)
{
	printf("(Press Enter to Continue)");
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
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
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
	}
	return 1; //maybe change this
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
	printf("\nSelect an option:> ");
	option = getIntInRange(0, 6);
	return (option);
}


// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void)
{

	int option;
	int exit = 2;
	
	 struct Contact contact[MAXCONTACTS] = { { { "Rick", {'\0'}, "Grimes" },
	 { 11, "Trailer Park", 0, "A7A 2J2", "King City" },
	 { "4161112222", "4162223333", "4163334444" } },
	 {
	 { "Maggie", "R.", "Greene" },
	 { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	 { "9051112222", "9052223333", "9053334444" } },
	 {
	 { "Morgan", "A.", "Jones" },
	 { 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
	 { "7051112222", "7052223333", "7053334444" } },
	 {
	 { "Sasha", {'\0'}, "Williams" },
	 { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	 { "9052223333", "9052223333", "9054445555" } },
		 };



	do {
		option = menu();

		switch (option)
		{
		case 1:
			displayContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 2:
			addContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 3:
			updateContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 4:
			deleteContact(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 5:
			searchContacts(contact, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 6:
			printf("\n<<< Feature to sort is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			exit = yes();
			printf("\n");
			break;

		default:
			break;

		}

	} while (exit != 1);
	printf("Contact Management System: terminated\n");
}

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char phoneNum[])
{
	int needInput = 1;

	while (needInput == 1) {
		scanf("%10[0123456789]", phoneNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(phoneNum) == 10)
		{
			needInput = 0;
		}

		else {
			printf("Enter a 10-digit phone number: ");
		}
	}
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size,
	const char cellNum[])
{

	int check;
	int i;
	for (i = 0; i < size; i++)
	{
		check = strcmp(contacts[i].numbers.cell, cellNum);
		if (check == 0)
		{
			return (i);
		}
	}
	return -1;
}

// displayContactHeader
// Put empty function definition below:
void displayContactHeader(void)
{
	printf("\n");
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");
}

// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int count)
{
	int i;
	printf("+");
	for (i = 0; i < 77; i++)
	{
		printf("-");
	}
	printf("+\n");
	printf("Total contacts: %d\n\n", count);
}



// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact* contact)
{
	if (strlen(contact->name.middleInitial) > 0)
	{
		printf(" %s %s %s\n", contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
	}
	else {
		printf(" %s %s\n", contact->name.firstName, contact->name.lastName);
	}
	printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);
	printf("      %d %s, ", contact->address.streetNumber, contact->address.street);
	if (contact->address.apartmentNumber != 0)
	{
		printf("Apt# %d, ", contact->address.apartmentNumber);
	}
	printf("%s, %s\n", contact->address.city, contact->address.postalCode);
}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contacts[], int size)
{
	int valid = 0;
	int i;
	displayContactHeader();
	for (i = 0; i < size; i++)
	{
		if (strlen(contacts[i].numbers.cell) == 10)
		{
			displayContact(&contacts[i]);
			valid++;
		}
	}
	displayContactFooter(valid);
}


// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact contacts[], int size)
{
	int index;
	char number[11];
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(number);
	index = findContactIndex(contacts, size, number);
	if (index != -1)
	{
		displayContact(&contacts[index]);
	}
	else {
		printf("*** Contact NOT FOUND ***\n\n");
	}
}


// addContact:
// Put empty function definition below:
void addContact(struct Contact contacts[], int size)
{
	printf("\n");
	int slot;
	slot = findContactIndex(contacts, size, "\0");
	if (slot != -1)
	{
		getContact(&contacts[slot]);
		printf("--- New contact added! ---\n\n");
	}
	else {
		printf("*** ERROR: The contact list is full! ***\n\n");
	}
}

// updateContact:
// Put empty function definition below:
void updateContact(struct Contact contacts[], int size)
{
	int index;
	char number[11];

	printf("\nEnter the cell number for the contact: ");
	getTenDigitPhone(number);
	index = findContactIndex(contacts, size, number);

	if (index != -1)
	{
		printf("\nContact found:\n\n");
		displayContact(&contacts[index]);
		printf("\n");
		printf("\nDo you want to update the name? (y or n): ");
		if (yes())
		{
			getName(&contacts[index].name);
		}
		printf("Do you want to update the address? (y or n): ");
		if (yes())
		{
			getAddress(&contacts[index].address);
		}
		printf("Do you want to update the numbers? (y or n): ");
		if (yes())
		{
			getNumbers(&contacts[index].numbers);
		}
		printf("--- Contact Updated! ---\n\n");
	}
	else
	{
		printf("*** Contact NOT FOUND ***\n\n");
	}

}


// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact contacts[], int size)
{
	char number[11];
	int index;

	printf("\nEnter the cell number for the contact: ");
	getTenDigitPhone(number);

	index = findContactIndex(contacts, size, number);

	if (index != -1)
	{
		printf("\nContact found:\n");
		displayContact(&contacts[index]);


		printf("\nCONFIRM: Delete this contact? (y or n): ");
		if (yes())
		{
			strcpy(&contacts[index].numbers.cell[0], "\0");
			printf("--- Contact deleted! ---\n\n");
		}
		else {
			putchar('\n');
		}
	}

	else
	{
		printf("*** Contact NOT FOUND ***\n\n");
	}
}


// sortContacts:
// Put empty function definition below:
void sortContacts(struct Contact contacts[], int size)
{


}


