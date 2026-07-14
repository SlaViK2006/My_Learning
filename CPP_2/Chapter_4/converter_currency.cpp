#include "std_lib_facilities.h"

//convert currency from yen, euro, and pounds to dollars
//a suffix 'y', 'e' or 'p' indicates the actual currency of the intput
//any other suffix is an error

int main()
{
  constexpr double yen = 162.457;   //number of yens in an one dollar
  constexpr double euro = 0.878;    //number of euro in one dollar
  constexpr double pounds = 0.7484; //number of pound in one dollar
  double amount = 1.0;              //amount of money 
  char unit = ' ';

  cout<<"Please enter an amount of money followed by unit (y, e  or p):\n";
  cin>>amount>>unit;

  if(unit == 'y')
    cout<<amount<<" yen == "<<amount/yen<<" dollar\n";
  else if(unit == 'e')
    cout<<amount<<" euro == "<<amount/euro<<" dollar\n";
  else if(unit == 'p')
    cout<<amount<<" pounds == "<<amount/pounds<<" dollar\n";
  else
    cout<<"Sorry, I don't know a unit called '"<<unit<<"'\n";

  return 0;
}
