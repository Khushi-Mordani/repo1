//Khushi Mordani
//Derived class constructor and destructor
#include<iostream>
using namespace std;

class Base
{
	int x;
	public:
		Base()
		{
			cout<<"Base class default constructor"<<endl;
		}
		Base(int a)
		{
			x = a;
			cout<<"Base class parameterized constructor"<<endl;
		}
		~Base()
		{
			cout<<"Base destructor"<<endl;
		}
};

class Derived : public Base
{
	int y;
	public :
		Derived()
		{
			cout<<"Derived class default constructor"<<endl;
		}
		Derived (int b):Base(y)//Calls the parameterized constructor of base whenever the object of derived class is created
		{
			y = b;
			cout<<"Derived class parameterized constructor"<<endl;
		}
		~Derived()
		{
			cout<<"Derived destructor"<<endl;
		}
};

int main()
{
	//Base b1;
	//Base b2(50);
	Derived d1;
	Derived d2(10); 
	return 0;
}

