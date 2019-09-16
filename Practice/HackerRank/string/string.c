#include <stdio.h>

#define MAX_LEN 128

int main()
{
    char ch;
    char word[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c", &ch);
    scanf("%s\n", word);
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sen);

    return 0;
}
