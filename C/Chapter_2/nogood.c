/*  nogood.c -- a program with errors  */

#include <stdio.h>

int main(void)
{
int n, n2, n3;

// This program is good
n = 5;
n2 = n * n;
n3 = n2 * n;
printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

return 0;
}
