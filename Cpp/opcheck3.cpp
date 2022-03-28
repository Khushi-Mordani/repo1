//Khushi Mordani
//output check
//Function / method overriding
#include<iostream>
using namespace std;

class base
{
	int i,j;
	public:
	void set(int a,int b)
	{
		i = a;
		j = b;
	}
	void show()
	{
		cout<<i<<" "<<j<<endl;
	}
};

class derived : public base
{
	int k;
	public:
	derived(int x)
	{
		k = x;
	}
	void show()
	{
		cout<<k<<endl;
	}
};

int main()
{
	derived ob(3); 
	ob.set(1,2); 
	ob.show(); //the function of derived class will be called 
	ob.base :: show(); //way to call the function from base class using the object of derived class
	return 0;
}
