#include<stdio.h>

#define IN 0
#define OUT 1

int main () {
  int c, state = OUT, wc = 0;

  while((c = getchar()) != EOF) {
    /* Is this a blank? */
    if (c == '\n' || c == '\t' || c == ' ') {
      if (state == IN) {
        /* Only count it as a word if we're inside a word */
        ++wc;
        state = OUT;
      }
    } 
    else {
      state = IN;
    }
  }

  printf("%d", wc);
  return 0;
}
