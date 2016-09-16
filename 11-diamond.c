#include<stdio.h>

void diamond(int);

int main() {
  diamond(40);

  return 0;
}

/* diamong: prints a diamond with a base of 2 * size */
void diamond(int size) {
  for (int row = 1; row <= size; row++) {
    for (int blank = size - row; blank > 0; blank--) {
      printf(" ");
    }

    for (int star = 1; star <= (2 * row) - 1; star++) {
      printf("*");
    }

    printf("\n");
  }

  for (int row = 1; row <= size; row++) {
    for (int blank = 1; blank <= row; blank++) {
      printf(" ");
    }

    for (int star = (2 * (size - row)) - 1; star > 0; star--) {
      printf("*");
    }

    printf("\n");
  }
}
