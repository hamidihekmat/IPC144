//==============================================
// Name:           Hekmat Hamidi	
// Student Number: 132645169
// Email:          hwhamidi@myseneca.ca
// Section:        NXX
// Date:           
//==============================================
// Assignment:     1
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

int main (void)
{
    // Declare variables here:
	struct Name fullName = { " " };
	struct Address addInfo = { 0, " ", 0, " ", " " };
	struct Numbers phoneInfo = { " ", " ", " " };
	char option;



    // Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");


    // Contact Name Input:
	// Get first Name
	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]%*c", fullName.firstName);
	// Get Middle Initial(s) 
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("%c%*c", &option);
	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]%*c", fullName.middleInitial);
	}
	// Get last Name
	printf("Please enter the contact's last name: ");
	scanf("%30[^\n]%*c", fullName.lastName);



    // Contact Address Input:
	// Get street number
	printf("Please enter the contact's street number: ");
	scanf("%d%*c", &addInfo.streetNumber);
	// Get street name
	printf("Please enter the contact's street name: ");
	scanf("%40[^\n]%*c", addInfo.street);
	// Get apartment Number
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("%c%*c", &option);
	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf("%d%*c", &addInfo.apartmentNumber);
	}
	// Get postal code
	printf("Please enter the contact's postal code: ");
	scanf("%7[^\n]%*c", addInfo.postalCode);
	// Get contact's city
	printf("Please enter the contact's city: ");
	scanf("%40[^\n]%*c", addInfo.city);


    // Contact Numbers Input:
	// Cell phone
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("%c%*c", &option);
	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf("%10[^\n]%*c", phoneInfo.cell);
	}
	// Home phone
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("%c%*c", &option);
	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%10[^\n]%*c", phoneInfo.home);
	}
	// business phone
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%c%*c", &option);
	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%10[^\n]%*c", phoneInfo.business);
	}

    // Display Contact Summary Details
	printf("\nContact Details\n");
	printf("---------------\n");
	// Name Details
	printf("Name Details:\n");
	printf("First name: %s\n", fullName.firstName);
	printf("Middle initial(s): %s\n", fullName.middleInitial);
	printf("Last name: %s\n", fullName.lastName);
	// Address Details
	printf("\nAddress Details:\n");
	printf("Street number: %d\n", addInfo.streetNumber);
	printf("Street name: %s\n", addInfo.street);
	printf("Apartment: %d\n", addInfo.apartmentNumber);
	printf("Postal code: %s\n", addInfo.postalCode);
	printf("City: %s\n", addInfo.city);
	// Phone Details
	printf("\nPhone Numbers:\n");
	printf("Cell phone number: %s\n", phoneInfo.cell);
	printf("Home phone number: %s\n", phoneInfo.home);
	printf("Business phone number: %s\n", phoneInfo.business);

    // Display Completion Message
	printf("\nStructure test for Name, Address, and Numbers Done!\n");


    return 0;
}

/*  SAMPLE OUTPUT:
    
    Contact Management System
    -------------------------
    Please enter the contact's first name: Tom
    Do you want to enter a middle initial(s)? (y or n): y
    Please enter the contact's middle initial(s): L. A.
    Please enter the contact's last name: Wong Song
    Please enter the contact's street number: 20
    Please enter the contact's street name: Keele Street
    Do you want to enter an apartment number? (y or n): y
    Please enter the contact's apartment number: 40
    Please enter the contact's postal code: A8A 4J4
    Please enter the contact's city: North York
    Do you want to enter a cell phone number? (y or n): Y
    Please enter the contact's cell phone number: 9051116666
    Do you want to enter a home phone number? (y or n): Y
    Please enter the contact's home phone number: 7052227777
    Do you want to enter a business phone number? (y or n): Y
    Please enter the contact's business phone number: 4163338888

    Contact Details
    ---------------
    Name Details:
    First name: Tom
    Middle initial(s): L. A.
    Last name: Wong Song

    Address Details:
    Street number: 20
    Street name: Keele Street
    Apartment: 40
    Postal code: A8A 4J4
    City: North York

    Phone Numbers:
    Cell phone number: 9051116666
    Home phone number: 7052227777
    Business phone number: 4163338888

    Structure test for Name, Address, and Numbers Done!
*/