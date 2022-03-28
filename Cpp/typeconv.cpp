//Khushi Mordani
//Basic type to class type conversion (using constructor)

#include<iostream>
using namespace std;

class Time
{
	int hr,min;
	public :
		Time()
		{
			cout<<"Default"<<endl;
		}
		Time (int x)
		{
			hr = x / 60;
			min = x % 60;
			cout<<"Parameterized constructor"<<endl;
		}
		//overload assignment operator
		void operator=(int x)
		{
			hr = x / 60;
			min = x % 60;
			cout<<"Inside the overloaded operator"<<endl;
		}
		void disp()
		{
			cout<<"Hour:"<<hr<<" Minutes:"<<min<<endl;
		}
};
int main()
{
	int x;
	cout<<"Enter the time in minutes:"<<endl;
	cin>>x;
	Time T1;
	T1 = x;
	T1.disp();
	return 0;
}
