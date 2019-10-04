
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
  double mean_l, mean_h;
  int highest[2], lowest[2];
  highest[0] = 0;
  lowest[0] = 41;
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
    while ((high[i] < low[i] || high[i] >= 40) || low[i] <= -40)
    { // if the condition is not met, decrement
      printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
      i--;
      printf("\n");
      break;
    }
  }
  printf("\nDay Hi Low\n");
  for (i = 0; i < NUMS; i++)
  {
    printf("%d   %d  %d\n", i + 1, high[i], low[i]);
  }
  return 0;
}
