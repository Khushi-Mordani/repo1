//Khushi Mordani
//output check
//Deriving a class in public mode from a class which has already been derived in private mode
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
		cout<<i<<" "<<j;
	}
};

class derived1 : private base
{
	int k;
	public:
	derived1(int x)
	{
		k = x;
	}
	void showk()
	{
		cout<<k;
	}
};

class derived2 : public derived1
{
	int k1;
	public:
	derived2(int x)
	{
		k1 = x;
	}
	void showk1()
	{
		cout<<k1;
	}
};



int main()
{
	derived1 ob1(10); 
	ob1.set(1,2); //will not be executed as the class is derived in private mode
	ob1.show(); //will not be executed as the class is derived in private mode
	derived2 ob2(20);
	ob2.set(4,5);
	ob2.show();
	//ob2.showk();
	return 0;
}
