#include<stdio.h>

unsigned invert(unsigned, int, int);

int main() {
  printf("%d\n", ~10);
  // printf("%d\n", invert(4, 2, 3));

  return 0;
}

/* invert: returns x, with the n bits starting at position p inverted */
unsigned int invert(unsigned int x, int p, int n) {
  return x >> p
  return 0;

  /*
  x     = 0011 0100; n = 2, p = 3
  */
}
