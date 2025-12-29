#include <stdio.h>
// Program 2 Fahrenheit to Celsius

int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0)*(fahr-32.0);
    printf("Fahrenheit: %3.0f\tCelsius: %3.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
