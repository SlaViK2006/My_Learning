#include "std_lib_facilities.h"

//convert from inches to centimeters or centimeters to inches
//a suffix 'i' or 'c' indicates the unit of the intput
//any other suffix is an error

int main()
{
  constexpr double cm_per_inch = 2.54;  //number of centimeters in an inch
  double length = 1.0;                  //length in centimeters or inches
  char unit = ' ';

  cout<<"Please enter a length followed by unit (c or i):\n";
  cin>>length>>unit;

  if(unit == 'i')
    cout<<length<<" in == "<<cm_per_inch*length<<" cm\n";
  else if(unit == 'c')
    cout<<length<<" cm == "<<length/cm_per_inch<<" in\n";
  else
    cout<<"Sorry, I don't know a unit called '"<<unit<<"'\n";

  return 0;
}
