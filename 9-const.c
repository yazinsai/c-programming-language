#include<stdio.h>

#define MY_CONST 0xA1ul
#define CHAR_CONST 'a'
#define BELL '\x7' /* hexadecimal '7' .. equivalent to 0x7 */

int main() {
  enum boolean { NO, YES }; /* NO = 0, YES = 1, ... */
  enum months { JAN = 1, FEB, MAR, APR, MAY }; /* JAN = 1, FEB = 2, ... */

  printf("%ld\n%c\n", MY_CONST, CHAR_CONST);
  return 0;
}
