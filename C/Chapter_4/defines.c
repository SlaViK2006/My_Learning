// defines.c -- uses defined constants from limit.h and float
#include <stdio.h>
#include <limits.h>  // integer limits 
#include <float.h>  // floating-point limits

int main(void)
{
  printf("Some number limits for this system:\n");
  printf("Biggest int: %d\n", INT_MAX);
  printf("Smallest long long: %lld\n", LLONG_MIN);
  printf("One byte = %d bits on this system.\n", CHAR_BIT);
  printf("Largest double: %e\n", DBL_MAX);
  printf("Smallest normal float: %e\n", FLT_MIN);
  printf("Float precission = %d digits\n", FLT_DIG);
  printf("Float epsilon = %e\n", FLT_EPSILON);

  return 0;
}
