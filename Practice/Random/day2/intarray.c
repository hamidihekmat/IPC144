

#include <stdio.h>

int main()
{
  char name[20] = {1, 2, 3, 4, 5, 6};
  for(int i = 0; name[i] != '\0'; i++){
    printf("%d\n", name[i]);
  }
  return 0;
}
