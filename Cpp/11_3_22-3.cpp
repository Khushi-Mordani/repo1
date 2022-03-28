//Khushi Mordani
//Rethrowing exceptions 

#include<iostream>
using namespace std;

int main()
{
	
	int a=1;
	try
	{
		try
		{
			throw a;
		}
		catch(int x)
		{
			cout<<"Exception in inner try-catch block"<<endl;
			throw x;
		}
	}
	catch(int a)
	{
		cout<<"Exception!"<<endl;
	}
	//return 0;
}

