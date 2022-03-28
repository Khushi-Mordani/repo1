//Khushi Mordani
//Lists
#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst;
	int i;
	for(i=0;i<10;i++)
		lst.push_back(i);
	cout<<"Size="<<lst.size()<<endl;
	cout<<"Contents:"<<endl;
	list<int>::iterator p=lst.begin();
	while(p!=lst.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	p = lst.begin();
	while(p!=lst.end())
	{
		*p = *p+100;
		p++;
	}
	cout<<"Contents modified:";
	p = lst.begin();
	while(p!=lst.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	cout<<"Contents reversed:";
	p = lst.end();
	while(p!=lst.begin())
	{
		p--;
		cout<<*p<<" ";
	}
	cout<<endl;
	return 0;
}

