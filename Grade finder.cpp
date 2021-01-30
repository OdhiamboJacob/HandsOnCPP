#include <iostream>
using std::cout;
using std::cin;
int main()
{
	int marks;
	cout<<"Enter marks to know your grade :\n ";
	cin>>marks;
	if(marks >100)
	{
		cout<< "Hey! Be logical and input real marks :\n";
	}
	if(marks<=100 && marks >=80)
	{
		cout<<"Your grade is A \n"<< "Excelent";
	}
	if(marks <=79 && marks >= 70)
	{
		cout<<"Your grade is B \n"<<"Very good";
	}
	if (marks <=69 && marks >= 60)
	{
		cout<<"Your grde is C \n"<<"Good";
	}
	if (marks <=59 && marks >= 40)
	{
		cout<<"Your grde is D \n"<<"pass";
	}
	else if (marks <=39 && marks >= 0)
	{
		cout<< "You failed"<<" retake the unit";
	}
}
