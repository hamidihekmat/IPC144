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

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contacts.h"
#include "contactHelpers.h"


void getName(struct Name* name)
{
	char option;
	printf("Please enter the contact's first name: ");
	scanf("%30s", (*name).firstName);
	clearKeyboard();
	// Get Middle Initial(s)
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	option = yes();
	if (option == 1)
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", (*name).middleInitial);
		clearKeyboard();
	}
	// Get last Name
	printf("Please enter the contact's last name: ");
	scanf("%35s", (*name).lastName);
	clearKeyboard();

}


// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:

void getAddress(struct Address* address)
{

	// Get street number
	char option;
	int valid;
	printf("Please enter the contact's street number: ");
	valid = getInt();
	while (valid < 0)
	{
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		valid = getInt();
	}
	(*address).streetNumber = valid;
	// Get street name
	printf("Please enter the contact's street name: ");
	scanf("%[^\n]40s", (*address).street);
	clearKeyboard();

	// Get apartment Number
	printf("Do you want to enter an apartment number? (y or n): ");
	option = yes();
	if (option == 1)
	{
		printf("Please enter the contact's apartment number: ");
		valid = getInt();
		while (valid < 0)
		{
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			valid = getInt();
		}
		(*address).apartmentNumber = valid;
	}
	// Get postal code
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", (*address).postalCode);
	clearKeyboard();
	
	// Get contact's city
	printf("Please enter the contact's city: ");
	scanf("%40s", (*address).city);
	clearKeyboard();
}



// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers* number)
{
	char option;
	// Contact Numbers Input:
	// Cell phone
	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone((*number).cell);
	// Home phone
	printf("Do you want to enter a home phone number? (y or n): ");
	option = yes();
	if (option == 1)
	{
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone((*number).home);
	}
	// business phone
	printf("Do you want to enter a business phone number? (y or n): ");
	option = yes();
	if (option == 1)
	{
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone((*number).business);
	}
}

/*
Hint: The getTenDigitPhone function does not display an initial prompt message. The function will
display a generic prompt only when and if an invalid value is entered. You should first display
the prompt message specific to the case, then call the getTenDigitPhone function:
char examplePhone[11];
printf("Enter example phone number: ");
getTenDigitPhone(examplePhone);
*/



// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:
void getContact(struct Contact* contact)
{
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);
	return;
}