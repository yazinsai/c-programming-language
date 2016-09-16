#include<stdio.h>

int main () {
  int c, blanks = 0;

  for (c = 0; (c = getchar()) != EOF; ++c)
    if(c == '\n' || c == '\t' || c == ' ')
      blanks++;

  printf("%d\n", blanks);

  return 0;
}
