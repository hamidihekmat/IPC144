/*
@auth: Hekmat Hamidi

@Objective

In order to get the last digit of a number, we use modulo operator \%.
When the number is modulo divided by 10 we get the last digit.

To find first digit of a number we divide the given number by  until number is greater than .
At the end we are left with the first digit.

@status: Completed

*/

#include <stdio.h>

int main() {

    int n;
    int sum = 0;
    scanf("%d", &n);
    while(n!=0)
    {
        sum += n % 10;
        n = n / 10;
    }
    printf("%d\n", sum);

    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
