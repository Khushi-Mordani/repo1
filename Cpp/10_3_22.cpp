//Khushi Mordani
//Virtual function : Runtime polymorphism

#include<iostream>
using namespace std;

class Base
{
	public:
	virtual void show()
	{
		cout<<"Base"<<endl;
	}
};

class Der1 : public Base
{
	public:
	void show()
	{
		cout<<"Derived1"<<endl;
	}
};

class Der2 : public Base
{
	public:
	void show()
	{
		cout<<"Derived2"<<endl;
	}
};

int main()
{
	Der1 dv1;
	Der2 dv2;
	Base *ptr;
	ptr = &dv1;
	ptr -> show();
	ptr = &dv2;
	ptr -> show();
	return 0;
}

