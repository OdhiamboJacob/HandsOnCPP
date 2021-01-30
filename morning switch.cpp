#include <iostream>
using std::cout;
using std::cin;
int main()
{
	int total=0;
	int product_code;
	for(int i=0;i<5;i++)
	{
		cout<<"enter 5 product codes to sum up the total prices:\n";
		cin>>product_code;
		switch(product_code)
		{
			case 1:
				cout<<"pencil\n";
				total=total+10;
				break;
				case 2:
					cout<<"book\n";
					total=total+50;
					break;
					default:
						cout<<"invlid code entry!\n";
		}
	}
	cout<<"the total bill of your shopping is :"<<total<<"\n";
	cout<<"thanks for shopping with us.!";
}
