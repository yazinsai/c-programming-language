#include<stdio.h>
#define MAXLEN 1000

int readline(char [], int);

int main() {
  char curline[MAXLEN];
  int len;

  len = readline(curline, MAXLEN);

  printf("Length = %d", len);
  return 0;
}

int readline(char line[], int limit) {
  int c, i = 0;

  while((c = getchar()) != EOF && i < limit) {
    line[i++] = c;
  }

  return i;
}
