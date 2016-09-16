#include<stdio.h>

/* count digits, white space, everything else */
int main () {
  int c, ndigit[10], nwhite, nother;

  /* initialize to 0 */
  nwhite = nother = 0;
  for (int i = 0; i < 10; i++) ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ndigit[c - '0']++;
    }
    else if (c == '\n' || c == '\t' || c == ' ') {
      nwhite++;
    }
    else {
      nother++;
    }
  }

  /* display results */
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < ndigit[i]; j++)
      printf("*");
    printf("\n");
  }

  printf("White = %d\nOthers = %d", nwhite, nother);

  return 0;
}
