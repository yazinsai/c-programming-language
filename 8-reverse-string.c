#include<stdio.h>
#define MAXLEN 1000

void reverse(char[]);
int length(char[]);

int main() {
  int c, i=0;
  char s[MAXLEN];

  /* read a line */
  while((c = getchar()) != EOF && i < MAXLEN) {
    s[i++] = c;
  }
  s[i] = '\0';

  /* reverse it */
  reverse(s);

  /* display the result */
  printf("%s", s);
  return 0;
}

/* reverse the string that is sent */
void reverse(char input[]) {
  int midpoint = length(input) / 2;
  int maxindex = length(input) - 1;

  for (int i = 0; i < midpoint; i++) {
    int tmp = input[i];
    input[i] = input[maxindex - i];
    input[maxindex - i] = tmp;
  }
}

int length(char input[]) {
  /* find the '\0' */
  int i = 0;

  for(int i = 0; i < MAXLEN; i++) {
    if (input[i] == '\0' || input[i] == '\n') {
      return i;
    }
  }

  /* malformed string without cap */
  return -1;
}
