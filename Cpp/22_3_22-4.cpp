//Khushi Mordani
//Insertion in vector


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
	//Insert one element at begin
	p = v.begin();
	p = v.insert(p,'A');
	cout<<"Modified contents(insert at begin):"<<endl;
	p = v.begin();
	while(p!=v.end())
	{	
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	//Insert three elements at end
	p = v.end();
	p = v.insert(p,3,'z');
	cout<<"Modified contents(insert at end):"<<endl;
	p = v.begin();
	while(p!=v.end())
	{	
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	//Erase from beginnning
	p = v.end();
	p = v.erase(p-3,p);
	cout<<"Modified contents(erase):"<<endl;
	p = v.begin();
	while(p!=v.end())
	{	
		cout<<*p<<" ";
		p++;
	}
	return 0;
}
