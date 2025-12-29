#include <stdio.h>
// Array Program

int main(){
  
  int array[10];

  for (int i = 0; i<=9; ++i){
    array[i] = i*i;
  }

  for (int i = 0; i<=9; ++i){
    printf("i = %d, array = %d\n", i, array[i]);
  }

  return 0;
}
