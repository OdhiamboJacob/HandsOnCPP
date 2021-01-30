# include <iostream>
using namespace ::std;
int main()
{ 
int marks;
int i=1;
int sum=0;
int count=0;
float average;
do
{
	cout<<"enter your marks to calculate sum and average	";
	cin>>marks;
	sum=sum + marks;
	count=count + 1;
	average=sum/count;
	i++;
}
while(i<5);
cout<<"sum is	"<<sum<<"\n";
cout<<"average is "<<average;
}
