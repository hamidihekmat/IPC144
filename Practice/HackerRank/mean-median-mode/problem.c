// Task
// Given an array, , of  integers, calculate and print the respective mean, median, and mode on separate lines.
//If your array contains more than one modal value, choose the numerically smallest one.

// Note: Other than the modal value (which will always be an integer)
//your answers should be in decimal form, rounded to a scale of  decimal place (i.e., ,  format).


#include <stdio.h>


double getMean(int len, int array[]){
    double mean;
    double sum = 0;
    for(int i = 0; i < len; i++){
        sum += array[i];
    }
    mean = sum / len;
    return mean;
}

int main() {
    int len;
    double mean, median, mode;
    scanf("%d", &len);
    int numbers[len];
    for(int i = 0; i < len; i++){
        scanf("%d", &numbers[i]);
    }
    mean = getMean(len, numbers);
    printf("%.1lf", mean);
    return 0;
}
