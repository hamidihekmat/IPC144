
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
  // initialize variable
  int high;
  int low;
  // print title
  printf("--== IPC Temperature Analyzer ===---\n");
  int day;
  for(day = 1; day <= NUMS; day++)
  {
    printf("Enter the high value for day%d: ", day);
    scanf("%d", &high);
    printf("Enter the low value for day%d: ", day);
    scanf("%d", &low);
    while((high < low && high <= 40) || low <= -40){
      printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
      day--;
      break;
    }
  }
  return 0;
}
