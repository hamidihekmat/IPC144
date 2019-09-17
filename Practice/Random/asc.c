#include <stdio.h>

int stringtonum(char string[])
{
  int digit;
  digit = string[0];
  digit = digit - 48;
  return digit;

}

int main()
{
  char number[20];
  int digit;
  printf("Please enter a number: ");
  scanf("%s", number);
  digit = stringtonum(number);
  printf("%d\n", digit);
  return 0;
}
