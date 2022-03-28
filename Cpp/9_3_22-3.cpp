//Khushi Mordani
//Pointer of base class points to object of derived class
//compile time polymorphism (shayad)
#include<iostream>
using namespace std;

class ABC
{
	public:
	int a;
		ABC()
		{
			a = 0;
		}
		ABC(int x)
		{
			a = x;
		}
		int get()
		{
			return a;
		}
};

class A : public ABC
{
	public:
	int b;
		A()
		{
			b = 0;
		}
		A(int y)
		{
			b = y;
		}
		int geta()
		{
			return b;
		}
};
int main()
{
	ABC ob(10);
	ABC *bptr;
	A a1(20);
	//ptr = &ob;
	bptr = &a1;
	//ptr -> geta();//Throws an error
	//(A *)ptr -> geta();//Throws an error
	ptr -> b = 100;
	bptr -> get();
	bptr = &a1;
	bptr -> b = 200;
	bptr -> //missed the code
	return 0;
}
