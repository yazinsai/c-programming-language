#include<stdio.h>

#define MAXLEN 1000 /* maximum line size */

/* function prototypes */
int readline(char line[], int maxline);
void copy(char to[], char from[]);

int main () {
  /* our length counters */
  int curlen, maxlen = 0;

  /* the actual strings */
  char curline[MAXLEN];
  char maxline[MAXLEN];

  while((curlen = readline(curline, MAXLEN)) > 0) {
    if (curlen > maxlen) {
      copy(maxline, curline);
      maxlen = curlen;
    }
  }

  /* display longest line */
  printf("Longest line:\n%s", maxline);

  return 0;
}

/* reads line from STDIN and stores it in line[]; returns length */
int readline(char line[], int maxline) {
  int c, i = 0;

  while(((c = getchar()) != EOF) && c != '\n' && i < maxline) {
    line[i++] = c;
  }

  /* cap the line */
  line[i] = '\0';

  return i;
}

/* copies one array into another */
void copy(char to[], char from[]) {
  int i = 0;
  while (from[i] != '\0') {
    to[i] = from[i];
    ++i;
  }
}
