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
        cout<<"what is a sex of your friend? Please enter 'm' or 'f':\n";
	char friend_sex = '0';
	cin>>friend_sex;
	if (friend_sex == 'm')
	  cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
	else
          cout<<"If you see "<<friend_name<<" please ask her to call me.\n";
	cout<<"How old are you?\n";
	  int age = 0;
	cin>>age;
	if (age <= 0 || age>=110)
	  simple_error("you're kidding! ");
        cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
	age = age;
        if(age<=12)
	  cout<<"Next year you will be "<<age+1<<".\n";
	if(age==17)
	  cout<<"Next year you you will be able to vote.\n";
	if(age>=70)
	  cout<<"I hope you are enjoying retirement.\n";
	
	return 0;
}
