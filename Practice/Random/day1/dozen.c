

#include <stdio.h>

int main()
{
  int eggs;
  scanf("%d", &eggs);

  double dozen = (float)eggs / 12.0;

  printf("%f", dozen);
  return 0;
}
