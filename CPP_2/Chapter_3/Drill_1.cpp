//read and write a first name
#include "std_lib_facilities.h"

int main()
{
	cout<<"Enter the name of the person you want to write to (followed 'enter'):\n";
	string first_name;	//first_name is a variable of type string
	cin>>first_name;	//read characters into first_name
	cout<<"Dear "<<first_name<< ",\n";
	cout<<"How are you? I am fine. I miss you.\n";
	cout<<"What is a name of your best friend? (followed 'enter'):\n";
	string friend_name;
	cin>>friend_name;       //read characters into friend_name
	cout<<"Have you seen "<<friend_name<< " lately?\n";
	
	return 0;
}
