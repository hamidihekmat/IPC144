#include <stdio.h>



int main(void){
  int numbers[20] = {8,33,7,6,5,4,1,23, 44, 2};
  int len = 9;
  int temp;

  for(int i = 0; i < len; i++){
    for(int j = 0; j < (len); j++){
      if (numbers[i] > numbers[i + 1]){
        temp = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i] = temp;
      }
    }
  }
  for(int i = len -1; i >= 0; i--){
    printf("%d,", numbers[i]);
  }
}
