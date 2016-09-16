#include<stdio.h>

// Function prototype
int power(int, int);

int main () {
  for (int i = 0; i < 10; i++) {
    printf("%d ^ %d = %4d\n", 2, i, power(2, i));
  }
  return 0;
}

int power(int base, int power) {
  int total = 1;

  for (int i = 0; i < power; i++) {
    total *= base;  
  }

  return total;
}
