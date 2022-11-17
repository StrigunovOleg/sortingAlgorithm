#include <stdio.h>

int main(void) {
  
  int numbers[16] = {45,32,67,78,22,3,4,56,25,11,83,67,80,85,89,96};

  int B[4];
  int num = 0;
  int temp = 0;
  int result[4];
  int iteration = 0;
  
  for (int i = 0; i < 16; i++) {
    
    //Putting array values into groups
    B[num] = numbers[i];
    num++;
    
    //Creating groups
    if (num == 4) {
      for (int i = 0; i < 4; i++) {
        
            //Sorting group values
            for (int j = i + 1; j < 4; j++) {
              if (B[i] < B[j]) {
              temp = B[i];
              B[i] = B[j];
              B[j] = temp;
              }
            }
            //printf("%d ", B[i]);
            result[iteration] = B[iteration];
      }
      
      iteration++;
      num = 0;
      //printf("\n");
    }
  }

  for (int i = 0; i < 4; i++) {printf("%d ", result[i]);}
  printf("\n");

  //Putting corresponding values into new array
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
        if (result[i] < result[j]) {
        temp = result[i];
        result[i] = result[j];
        result[j] = temp;
      }
    }
    //printf("%d ", result[i]);
  }
  
  printf("Max value: ");
  printf("%d ", result[0]);
  printf("\n");

  printf("Min value: ");
  printf("%d ", result[3]);
  printf("\n");

  printf("The sum of the lowest and the biggest value: ");
  printf("%d ", result[0] + result[3]);
  
  return 0; 
  
}