//Khushi Mordani
//New delete operations

#include<iostream>
using namespace std;

int main()
{
	//new
	int *pt = new int;
	*pt = 55;
	cout<<"Value :"<<*pt;
	cout<<endl<<"Address of int value:"<<pt;
	cout<<endl<<"Size of *pt:"<< sizeof(*pt);
	cout<<endl<<"Size of pt:"<< sizeof(pt);
	cout<<endl<<"Address of int pointer:"<<&pt<<endl;
	delete pt;
	return 0;
}

