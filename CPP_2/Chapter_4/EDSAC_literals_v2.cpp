#include "std_lib_facilities.h"

//calculate and print a table of literals from a to z

int main()
{
  char lit = 'a'; //start from literal 'a'
  char lit_b = 'A'; //start from literal 'A'
  while (lit<='z' && lit_b<='Z'){
    cout<<lit<<'\t'<<int(lit)<<'\t'<<lit_b<<'\t'<<int(lit_b)<<'\n';
    ++lit; //increment lit (that is, lit becoms lit+1)
    ++lit_b; //increment lit_b (that is, lit_b becoms lit_b+1)
  }
}
