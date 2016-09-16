#include<stdio.h>
#include<string.h>

int any(char [], char []);

int main() {
  printf("result = %d\n\n", any("i am a string", "ng"));
  return 0;
}

/* any: returns first location in s1 of any char from s2; -1 otherwise */
int any(char s1[], char s2[]) {
  /* we need string lengths for this */
  int ls1 = strlen(s1);
  int ls2 = strlen(s2);

  for (int i = 0; i < ls1; i++) {
    for (int j = 0; j < ls2; j++) {
      if (s2[j] == s1[i]) {
        /* match! return position in s1 */
        return i;
      }
    }
  }

  return -1;
}
