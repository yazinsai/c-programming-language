#include<stdio.h>

#define LOWER 0
#define UPPER 300 /* upper limit */
#define STEP  20

int main () {
  float fahr, celsius;

  for(fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    celsius = 5.0 * (fahr - 32.0) / 9.0;
    printf("%3.0f\t%6.2f\n", fahr, celsius);
  }

  return 0;
}
