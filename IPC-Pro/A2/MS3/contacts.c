//==============================================
// Name:           Hekmat Hamidi
// Student Number: 132645169
// Email:          hwhamidi@myseneca.ca
// Section:        NXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      3
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contacts.h"
#include "contactHelpers.h"



// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


void getName(struct Name* name)
{
	char option;
	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]%*c", (*name).firstName);
	// Get Middle Initial(s)
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	option = yes();
	if (option == 1)
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]%*c", (*name).middleInitial);
		clearKeyboard();
	}
	// Get last Name
	printf("Please enter the contact's last name: ");
	scanf("%30[^\n]%*c", (*name).lastName);

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
	scanf("%40[^\n]%*c", (*address).street);
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
	scanf("%7[^\n]%*c", (*address).postalCode);
	clearKeyboard();
	// Get contact's city
	printf("Please enter the contact's city: ");
	scanf("%40[^\n]%*c", (*address).city);
}



// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers* number)
{
	char option;
	// Contact Numbers Input:
	// Cell phone
	printf("Please enter the contact's cell phone number: ");
	scanf("%10[^\n]%*c", (*number).cell);

	// Home phone
	printf("Do you want to enter a home phone number? (y or n): ");
	option = yes();
	if (option == 1)
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%10[^\n]%*c", (*number).home);
	}
	// business phone
	printf("Do you want to enter a business phone number? (y or n): ");
	option = yes();
	if (option == 1)
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%10[^\n]%*c", (*number).business);
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