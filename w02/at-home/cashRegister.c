
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
	const double q = 0.25, d = 0.10, n = 0.05, p = 0.01;
	double amount, tax;
	int loonies, quarters, dime, nickle;
	double loonies_owing, quarters_owing, dime_owing, nickle_owing, pennies_owing = 0, pennies;
	// Input of amount
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	// Calculation
	tax = amount * .13 + .005;
	printf("GST: 1.13\n");
	printf("Balance owing: $%.2lf\n", amount += tax);

	loonies = amount;
	loonies_owing = amount - loonies;
	quarters = ((amount - loonies) / q);
	quarters %= 25;
	quarters_owing = loonies_owing - (quarters * q);
	dime = quarters_owing / d;
	dime %= 10;
	dime_owing = quarters_owing - (dime * d);
	nickle = dime_owing / n;
	nickle %= 5;
	nickle_owing = dime_owing - (nickle * n);
	pennies = nickle_owing / p;

	// Output
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, loonies_owing);
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, quarters_owing);
	printf("Dimes required: %d, balance owing $%.2lf\n", dime, dime_owing);
	printf("Nickels required: %d, balance owing $%.2lf\n", nickle, nickle_owing);
	printf("Pennies required: %.f, balance owing $%.2lf\n", pennies, pennies_owing);
	return 0;
}
