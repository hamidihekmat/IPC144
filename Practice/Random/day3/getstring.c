


#include <stdio.h>


char getString(char print[30], char s[])
{
  printf("%s", print);
  scanf("%[^\n]*c", s);
  return *s;
}

int main()
{
  char name[30];
  getString("What is your name?", name);
  printf("%s\n", name);
}
