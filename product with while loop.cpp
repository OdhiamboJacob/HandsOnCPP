#include <iostream>
using std::cout;
using std:: cin;
int main()
{
	int x,b,i;
	b=10;
	i=0;
	cout<<"Enter the range x :\t";
	cin>>x;
	while(i<=x)
	{
		cout<<i<<"     "<<i*b<<"\n";
		i++;
	}
}
