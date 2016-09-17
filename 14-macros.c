#include <stdio.h>

#define swap(t, x, y) ({t tmp; tmp = x; x = y; y = tmp;})

int main() {
  int a = 3, b = 30;
  printf("BEFORE:\na=%d, b = %d\n\n", a, b);
  swap(int, a, b);
  printf("AFTER:\na=%d, b = %d\n\n", a, b);
  return 0;
}
