#include "std_lib_facilities.h"

//calculate and print a table of squares 0-99
//A definition for function square
int square(int x){
  return x * x;
}

int main()
{
  int i = 0; //start from zero
  while (i<100){
    cout<<i<<'\t'<<square(i)<<'\n';
    ++i; //increment i (that is, i becoms i+1)
  }
}
