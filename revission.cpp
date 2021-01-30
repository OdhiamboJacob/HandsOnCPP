#include <iostream>
#include <cmath>
using namespace ::std;//using directive

double power(double base, int exponent)
{
	double result = 1;
	for(int i = 0 ;i < exponent; i++)
	{
		result = result +base;
	}
	return result;
}
int main()
{
	int base,exponent;
	cout << "what is the base? ";
	cin >> base;
	cout << "whaat is the exponent? ";
	cin >>exponent;
	double mypower = power(base,exponent);
	cout << mypower <<std :: endl;
}
