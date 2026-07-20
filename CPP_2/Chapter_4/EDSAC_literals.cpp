#include "std_lib_facilities.h"

//calculate and print a table of literals from a to z

int main()
{
  char lit = 'a'; //start from literal 'a'
  while (lit<='z'){
    cout<<lit<<'\t'<<int(lit)<<'\n';
    ++lit; //increment i (that is, i becoms i+1)
  }
}
