#include <stdio.h>

int power(int base, int pow){
  int result = 1;
  for (int i = 0; i <= (pow-1); ++i){
    result = result*base;
  }
  return result;
}

int main(){

  for (int i = 0; i <= 9; ++i){
    printf("i = %d 2^i = %d\n", i, power(2,i));
  }
  return 0;
}
