#include "std_lib_facilities.h"

//convert from inches to centimeters or centimeters to inches
//a suffix 'i' or 'c' indicates the unit of the intput

int main()
{
  constexpr double cm_per_inch = 2.54;  //number of centimeters in an inch
  double length = 1.0;                  //length in centimeters or inches
  char unit = 0;

  cout<<"Please enter a length followed by unit (c or i):\n";
  cin>>length>>unit;

  if(unit=='i')
    cout<<length<<" in == "<<cm_per_inch*length<<" cm\n";
  else
    cout<<length<<" cm == "<<length/cm_per_inch<<" in\n";

  return 0;
}
