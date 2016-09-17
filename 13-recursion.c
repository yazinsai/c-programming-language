#include <stdio.h>
#include <string.h>
#define MAXLEN 100
void itos(int, char [], int);
char dtoc(int);
void srev(char [], int);

int main() {
  char s[MAXLEN] = "";
  int i = 1901003;
  itos(i, s, 0);

  printf("%d\n%s\n", i, s);
  return 0;
}

/* itos: convert integer i to string s */
void itos(int i, char s[], int l) {
  printf("pass {i=%d, s=%s, l=%d}\n", i, s, l);

  s[l] = dtoc(i % 10), s[l+1] = '\0';
  i /= 10;

  if (i == 0) {
    srev(s, 0);
  }
  else if (i > 0) {
    itos(i, s, l + 1);
  }
}

/* dtoc: converts a single integer digit to a char */
char dtoc(int i) {
  return i + '0';
}

/* srev: reverses s in place */
void srev(char s[], int n) {
  int l = strlen(s) - 1; // exclude '\0'

  if (n < l / 2) {
    // swap
    int t = s[n];
    s[n] = s[l - n];
    s[l - n] = t;

    srev(s, ++n);
  }
}
