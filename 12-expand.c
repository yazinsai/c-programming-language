#include <stdio.h>
#include <string.h>

#define OTHER  0
#define ALPHA  1

void expand(char [], char []);
int isalpha(char);

int main() {
  char in[1000], out[1000], c;
  int i = 0;

  while((c = getchar()) != EOF) {
    in[i++] = c;
  }

  expand(in, out);

  return 0;
}

/* expand: changes ranges in s1 to expanded chars
   e.g.: for s1 = "a-d0-5" -> s2 = "abcd012345"
 */
void expand(char s1[], char s2[]) {
  int c1, c2, l;

  for (c1 = c2 = 0; c1 < (l = strlen(s1)); c1++) {
    // peek-ahead
    if (isalpha(s1[c1]) && (c1 + 2 < l) && s1[c1+1] == '-') {
      // found a range
      printf("Found a range at position %d\n", c1);
    }
    else {
      // copy as is
      s2[c2] = s1[c1];
    }
  }
}

/* isalpha: returns 1 if alphanumeric, 0 otherwise */
int isalpha(char c) {
  if ((c >= 'a' && c <= 'z') ||
      (c >= 'A' && c <= 'Z') ||
      (c >= '0' && c <= '9')) {
    // Valid
    return 1;
  }

  return 0;
}
