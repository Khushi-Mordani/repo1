//Khushi Mordani
//Restricting exceptions

#include<iostream>
using namespace std;

void Demo() 
throw(int,double) //restricting demo to throw int and double
{
	int a = 1;
	if(a==1)
		throw a; //Throwing  exception
	else if(a==2)
		throw 'A'; //Throwing character exception
	else if(a==3)
		throw 4.5;
}

int main()
{
	try
	{
		Demo();
	}
	catch(int n)
	{
		cout<<"Exception caught!"<<endl;
	}
	cout<<"End of program!"<<endl;
}
