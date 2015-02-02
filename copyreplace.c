#include <stdio.h>

/* copy input to output replacing each string of one or more blanks with a single blank */
int main() {
  int c, d;
  while((c = getchar()) != EOF) {
    putchar(c);
    if(c==' ') {
      while((d = getchar()) == ' ');
      putchar(d);
    }
  }
}
