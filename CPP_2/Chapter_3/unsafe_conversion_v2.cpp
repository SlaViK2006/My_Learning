//Usnsafe conversions version 2

#include "std_lib_facilities.h"

int main()
{
	double d = 0;
	while (cin>>d)
	{
		int i = d;		//try to squeeze a double to int
		char c = i;		//try to squeeze an int into a char
		int i2 = c;		//get the integer value of the characte
		cout<<"d=="<<d			//the original double
				<<" i=="<<i			//converted to int
				<<" i2=="<<i2		//int value of char
				<<" char(" <<c<< ")\n";		//the char
	}

	return 0;
}
