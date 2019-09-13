
//==============================================
// Name:           Hekmat Hamidi
// Student Number: 132645169
// Email:          hwhamidi@myseneca.ca
// Section:        XN
// Workshop:       2 (at-home)
//==============================================

#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

// Paste your in-lab code below and upgrade it to the at-home specifications


int main(void)
{
	// Initialize variables
	float amount;
	int loonies = 0;
	int quarters = 0;
	float temp_amount;
	float l_owing;
	float q_owing;
	float q_remainder;
	printf("Please enter the amount to be paid: $");
	scanf_s("%f", &amount);
	temp_amount = amount;
	while(amount > 1)
	{
		loonies++;
		amount -= 1;
	}

	l_owing = fmod(temp_amount, loonies);
	q_owing = l_owing;

	while (l_owing > 0.25)
	{
		l_owing -= 0.25;
		quarters++;
	}

	q_remainder = fmod(q_owing, 0.25);
	printf("Loonies required: %d, balance owing $%.2f\n", loonies, q_owing);
	printf("Quarters required: %d, balance owing $%.2f", quarters, q_remainder);
	return 0;



}
