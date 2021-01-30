#include <iostream>
using namespace ::std;
int main()
{
	int a=5;
	int b=10;
	int temp;
	cout<<"before swping"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	temp =a;
	a=b;
	b=temp;
	cout<<"after swaping"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
