
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
  int highest[2], lowest[2];
  highest[0] = high[0], lowest[0] = low[0];
  printf("\nDay  Hi  Low\n");
  for (i = 0; i < NUMS; i++)
  {
    printf("%d    %d    %d\n", i + 1, high[i], low[i]);
    if(highest[0] <= high[i]){
      highest[0] = high[i];
      highest[1] = i + 1;
    }
    if(lowest[0] >= low[i]){
      lowest[0] = low[i];
      lowest[1] = i + 1;
    }
  }
  printf("\nThe highest temperature was %d, on day %d\n", highest[0], highest[1]);
  printf("The lowest temperature was %d, on day %d\n", lowest[0], lowest[1]);
  // mean average
  printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", NUMS);
  int choice;
  scanf("%d", &choice);
  while(!(choice < 0))
  {
    if(choice > NUMS || choice == 0){
      printf("\nInvalid entry please enter a number between 1 and %d, inclusive: ", NUMS);
      scanf("%d", &choice);
    }
    if(choice <= NUMS && choice >=1){
      int i;
      double sum;
      for(i = 0; i < choice; i++){
        sum += high[i] + low[i];
      }
      printf("\nThe average temperature up to day %d is: %.2lf\n", choice, sum / (choice * 2));
      sum = 0;
      printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", NUMS);
      scanf("%d", &choice);
    }
  }
  printf("\nGoodbye!\n");
  return 0;
}
