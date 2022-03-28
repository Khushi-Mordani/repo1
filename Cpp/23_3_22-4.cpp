//Khushi Mordani
//Maps storing class objects

#include<iostream>
#include<string.h>
#include<map>
using namespace std;

class name
{
	char str[40];
	public:
		name()
		{
			strcpy(str,"");
		}
		name(char *s)
		{
			strcpy(str,s);
		}
		char *get()
		{
			return str;
		}
};

bool operator<(name a,name b)
{
	return strcmp(a.get(),b.get())<0;
}
class phonenum
{
	char str[80];
	public:
		phonenum()
		{
			strcmp(str,"");
		}
		phonenum(char *s)
		{
			strcpy(str,s);
		}
		char *get()
		{
			return str;
		}
};

int main()
{
	map<name,phonenum> directory;
	directory.insert(pair<name,phonenum>(name("Emp1"),phonenum("555-1111")));
	directory.insert(pair<name,phonenum>(name("Emp2"),phonenum("555-2222")));
	directory.insert(pair<name,phonenum>(name("Emp3"),phonenum("555-3333")));
	directory.insert(pair<name,phonenum>(name("Emp4"),phonenum("555-4444")));
	char str[80];
	cout<<"Enter name:";
	cin>>str;
	map<name,phonenum>::iterator p;
	p = directory.find(name(str));
	if(p!=directory.end())
		cout<<"Phone number:"<<p->second.get()<<endl;
	else
		cout<<"Name not in directory"<<endl;
}
