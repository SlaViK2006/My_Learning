#include "std_lib_facilities.h"

//calculate and print a table of literals from a to z

int main()
{
  for (char lit = 'a',  lit_b = 'A'; lit<='z' && lit_b<='Z'; ++lit, ++lit_b){
    cout<<lit<<'\t'<<int(lit)<<'\t'<<lit_b<<'\t'<<int(lit_b)<<'\n';
  }
}
