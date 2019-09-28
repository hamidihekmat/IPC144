
//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          hwhamidi@myseneca.ca
// Section:        NXX
// Workshop:       3 (in-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define NUMS 4

int main()
{
  // initialized variables
  int high;
  int low;
  double mean_l, mean_h;
  int highest[2], lowest[2];
  highest[0] = 0; lowest[0] = 0;
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
      printf("\n");
      printf("Enter the high value for day %d: ", i);
      scanf("%d", &high);
      printf("\n");
      printf("Enter the low value for day %d: ", i);
      scanf("%d", &low);
      printf("\n");
    }
    mean_l += low;
    mean_h += high;
    if(highest[0] < high){
      highest[0] = high;
      highest[1] = i;
    }
    if(lowest[0] > low){
      lowest[0] = low;
      lowest[1] = i;
    }
  }
  printf("The average (mean) LOW temperature was: %.2lf\n", mean_l/4.0);
  printf("The average (mean) HIGH temperature was: %.2lf\n", mean_h/4.0);
  printf("The average (mean) temperature was: %.2lf\n", (mean_h + mean_l) / 8.0);
  printf("The highest temperature was %d, on day %d\n", highest[0], highest[1]);
  printf("The lowest temperature was %d, on day %d\n", lowest[0], lowest[1]);
  return 0;
}
