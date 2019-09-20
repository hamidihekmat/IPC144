
//==============================================
// Name:           Hekmat Hamidi
// Student Number: 132645169
// Email:          hwhamidi@myseneca.ca
// Section:        XN
// Workshop:       2 (in-lab)
//==============================================

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	// Initialize variables
	const double q = 0.25;
	double amount;
	int loonies, quarters;
	double loonies_owing, quarters_owing;
	// Input of amount
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	// Calculation
	loonies = amount;
	loonies_owing = amount - loonies;
	quarters = ((amount - loonies) / q);
	quarters_owing = loonies_owing - (quarters * q);
	// Output
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, loonies_owing);
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, quarters_owing);
	return 0;
}
