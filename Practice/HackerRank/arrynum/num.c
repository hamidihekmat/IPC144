#include <stdio.h>


int main()
{
    char num[][11] = {{"one"}, {"two"}, {"three"}, {"four"}, {"five"}, {"six"}, {"seven"}, {"eight"}, {"nine"}, {"even"}, {"odd"}};
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    for(int i=a; i <= 9; i++){
        printf("%s\n", num[i - 1]);
    }
    printf("%s\n", num[(a % 2) + 9]);
    for(int i=b; i <= 9; i++){
        printf("%s\n", num[i - 1]);
    }
    printf("%s\n", num[(b % 2) + 9]);
    return 0;
}
