/* Author: Pragya Bajoria */

#include <stdio.h>

#define IN 1     /* inside a space */
#define OUT 0    /* outside a space */

/* copy input to output replacing each string of one or more blanks with a single blank */
int main()
{
  int c, state;
  state = OUT;
  while ((c = getchar()) != EOF) {

    // if character is outside the state or if it is inside, the current character is not a space
    if (state == OUT || (state == IN && c != ' '))
      putchar(c);

    if (c == ' ') // if character is inside a space
      state = IN;
    else      // if character is outsid a space
      state = OUT;
  }
}
