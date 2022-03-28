//Khushi Mordani
//output check
//Deriving a class in private mode
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

class derived : private base
{
	int k;
	public:
	derived(int x)
	{
		k = x;
	}
	void showk()
	{
		cout<<k;
	}
};

int main()
{
	derived ob(3); 
	ob.set(1,2); //will not be executed as the class is derived in private mode
	ob.show(); //will not be executed as the class is derived in private mode
	return 0;
}
