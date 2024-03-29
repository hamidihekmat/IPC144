
//==============================================
// Name:           Hekmat Hamidi
// Student Number: 13245169
// Email:          hwhamidi@myseneca.ca
// Section:        NXX
// Workshop:       4 (at-lab)
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  // initialized variables
  int NUMS;
  // print title
  printf("---=== IPC Temperature Calculator V2.0 ===---\n");
  printf("Please enter the number of days, between 3 and 10, inclusive: ");
  scanf("%d", &NUMS);
  while (!(NUMS >= 3 && NUMS <= 10))
  {
    printf("\n");
    printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
    scanf("%d", &NUMS);
  }
  printf("\n");
  int high[NUMS], low[NUMS];
  int i;
  for (i = 0; i < NUMS; i++) //loop through number of days
  {
    printf("Day %d - High: ", i + 1);
    scanf("%d", &high[i]);
    printf("Day %d - Low: ", i + 1);
    scanf("%d", &low[i]);
    }
  printf("\nDay  Hi  Low\n");
  for (i = 0; i < NUMS; i++)
  {
    printf("%d    %d    %d\n", i + 1, high[i], low[i]);
  }
  return 0;
}
