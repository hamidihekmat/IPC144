//==============================================
// Name:           Hekmat Hamidi
// Student Number: 132645169
// Email:          hwhamidi@myseneca.ca
// Section:        NXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"
#include "contacts.h"

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:



// This source file needs to "know about" the functions you prototyped
//         in the contact helper header file too
// HINT-1: You will want to use the new yes() and getInt() functions to help
//         simplify the data input process and reduce redundant coding
//
// HINT-2: Put the header file name in double quotes so the compiler knows
//         to look for it in the same directory/folder as this source file
//         #include your contactHelpers header file on the next line:



// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function definitions below...            |
// +-------------------------------------------------+
//
// HINT:  Update these function to use the helper 
//        functions where applicable (ex: yes() and getInt() )

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