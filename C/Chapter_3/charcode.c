/* charcode.c -- displays code number for a character */

#include <stdio.h>

int main(void)
{
  char ch;

  printf("Plaese enter a character.\n");
  scanf("%c", &ch);
  printf("The code for %c is %d.\n", ch, ch );

  return 0;
}
