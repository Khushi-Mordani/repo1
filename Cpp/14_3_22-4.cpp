#include<iostream>
#include<exception>
using namespace std;

int main()
{
	try
	{
		int *myarray = new int[100];
	}
	catch(exception &e)
	{
		cout<<"Standard exception:"<<e.what()<<endl;
	}
	cout<<"End of main!"<<endl;
	return 0;
}

