#include "std_lib_facilities.h"

//calculate and print a table of literals from a to z

int main()
{
  for (char lit = 'a'; lit<='z'; ++lit){
    cout<<lit<<'\t'<<int(lit)<<'\n';
  }
}
