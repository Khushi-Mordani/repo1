#include<iostream>
using namespace std;

class A
{
	public:
		void displayA()
		{
			cout<<"Display A function!"<<endl;
		}
};
class B
{
	public:
		void displayB()
		{
			cout<<"Display B function!"<<endl;
		}
};
class C : public A
{
	public:
		void displayC()
		{
			cout<<"Display C function!"<<endl;
		}
};
class D : public B
{
	public:
		void displayD()
		{
			cout<<"Display D function!"<<endl;
		}
};
class E : public C,public D
{
	public:
		void displayC()
		{
			cout<<"Display E function!"<<endl;
		}
};
class F : public E
{
	public:
		void displayC()
		{
			cout<<"Display F function!"<<endl;
		}
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	a.displayA();
	b.displayA();//error
	b.displayC();//error
	b.displayD();//error
	f.displayA();
	f.displayC();
	f.displayB();
	f.displayE();//error
	e.displayA();
	e.displayB();
	e.displayC();
	return 0;
}
