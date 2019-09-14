
//==============================================
// Name:           Hekmat Hamidi
// Student Number: 132645169
// Email:          hwhamidi@myseneca.ca
// Section:        XN
// Workshop:       2 (at-home)
//==============================================

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
	// Initialize variables
	const float l = 1.0, q = 0.25, d = 0.10, n = 0.05, p = 0.01;
	float amount;
	int loonies, quarters, dime, nickle;
	float loonies_owing, quarters_owing, dime_owing, nickle_owing, pennies_owing = 0.0, pennies;
	// Input of amount
	printf("Please enter the amount to be paid: $");
	scanf("%f", &amount);
	// Calculation
	loonies = amount;
	loonies_owing = amount - loonies;
	quarters = ((amount - loonies) / q);
	quarters_owing = loonies_owing - (quarters * q);
	dime = quarters_owing / d;
	dime_owing = quarters_owing - (dime * d);
	nickle = dime_owing / n;
	nickle_owing = dime_owing - (nickle * n);
	pennies = nickle_owing / p;
	// Output
	printf("Loonies required: %d, balance owing $%.2f\n", loonies, loonies_owing);
	printf("Quarters required: %d, balance owing $%.2f\n", quarters, quarters_owing);
	printf("Dimes required: %d, balance owing $%.2f\n", dime, dime_owing);
	printf("Nickles required: %d, balance owing $%.2f\n", nickle, nickle_owing);
	printf("Pennies required: %.f, balance owing $%.2f", pennies, pennies_owing);
	return 0;
}
