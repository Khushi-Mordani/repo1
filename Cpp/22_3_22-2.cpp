//Khushi Mordani
//Accessing a vector through iterator

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<char> v(10);
	vector<char>::iterator p; //creates an iterator of the vector
	int i;
	p = v.begin();
	i = 0;
	cout<<"Original contents:"<<endl;
	while(p!=v.end())
	{
		*p = i + 'a';
		cout<<*p<<" ";
		p++;
		i++;
	}
	cout<<endl;
	p = v.begin();
	cout<<"Modified contents:"<<endl;
	while(p!=v.end())
	{	
		*p = toupper(*p);
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	return 0;
}
