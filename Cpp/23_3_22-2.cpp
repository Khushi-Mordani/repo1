//Khushi Mordani
//Sorting and merging lists

#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst1,lst2;
	int i;
	for(i=0;i<10;i+=2)
		lst1.push_back(rand()%20);
	for(i=1;i<11;i+=2)
		lst2.push_back(rand()%20);
	cout<<"Contents of list1:"<<endl;
	list<int> :: iterator p = lst1.begin();
	while(p!=lst1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl<<"Contents of list2:"<<endl;
	p = lst2.begin();
	while(p!=lst2.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	lst1.sort();
	cout<<"Sorted list1 contents:"<<endl;
	p = lst1.begin();
	while(p!=lst1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	/*lst2.sort();
	cout<<endl<<"Sorted list2 contents:"<<endl;
	p = lst2.begin();
	while(p!=lst2.end())
	{
		cout<<*p<<" ";
		p++;
	}*/
	lst1.merge(lst2);
	if(lst2.empty())
		cout<<"List is now empty"<<endl;
	cout<<"Contents of lst1 after merging:"<<endl;
	p = lst1.begin();
	while(p!=lst1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	return 0;
	
}
