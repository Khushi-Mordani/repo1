//Khushi Mordani
//Throw outside try block

#include<iostream>
using namespace std;

void Xtest(int test)
{
	cout<<"Inside Xtest, test is:"<<test<<endl;
	if(test)
		throw test;
}

int main()
{
	cout<<"Start"<<endl;
	try
	{
		cout<<"Inside try block!"<<endl;
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch (int i)
	{
		cout<<"Caught an exception! Value is :"<<i<<endl;
	}
	cout<<"End"<<endl;
	return 0;
}
