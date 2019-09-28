
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
  int high;
  int low;

  printf("--== IPC Temperature Analyzer ===---\n");
  int i;
  for(i = 1; i <= NUMS; i++)
  {
    printf("Enter the high value for day%d: ", i);
    scanf("%d", &high);
    printf("Enter the low value for day%d: ", i);
    scanf("%d", &low);
    while((high < low || high >= 40) || low <= -40){
      printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
      i--;
      break;
    }

  }
  printf("%d", high);
  printf("%d", low);
  return 0;
}
