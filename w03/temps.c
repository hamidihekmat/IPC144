
//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          hwhamidi@myseneca.ca
// Section:        NXX
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define NUMS 3

int main()
{
  // initialized variables
  int high;
  int low;
  // print title
  printf("---=== IPC Temperature Analyzer ===---\n");
  int i;
  for(i = 1; i <= NUMS; i++) //loop through number of days
  {
    printf("Enter the high value for day %d: ", i);
    scanf("%d", &high);
    printf("\n");
    printf("Enter the low value for day %d: ", i);
    scanf("%d", &low);
    printf("\n");
    while((high < low || high >= 40) || low <= -40){ // if the condition is not met, decrement
      printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
      i--;
      break;
    }

  }
  return 0;
}
