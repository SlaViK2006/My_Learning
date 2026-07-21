#include "std_lib_facilities.h"

//calculate and print a table of squares 0-99
//a definition for function square
int square(int x){
  return x * x;
}

int main()
{
  for(int i = 0; i<100; ++i){
    cout<<i<<'\t'<<square(i)<<'\n';
  }
}
