
#include <stdio.h>


int main(void)
{
  char firstname[20];
  int age;
  printf("Please enter your name: ");
  scanf("%[^\n]*c", firstname);
  printf("Please Enter your age: ");
  scanf("%d", &age);
  printf("Your name is %s and your age is %d\n", firstname, age);
  return 0;
}
