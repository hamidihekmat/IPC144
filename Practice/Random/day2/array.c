

#include <stdio.h>

int main()
{
  char name[20] = "Hekmat";
  for(int i = 0; name[i] != '\0'; i++){
    printf("%c\n", name[i]);
  }
  return 0;
}
