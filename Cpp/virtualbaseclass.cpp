//Khushi Mordani
//Virtual base class : Solution of the previous ambiguity error

#include<iostream>
using namespace std;

class A
{
	public:
		int i;
};
class B :public virtual A
{
	public :
		int j;
};
class C :virtual public A
{
	public :
		int k;
};
class D : public B, public C
{
	public:
		int sum;
};
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	D d1;
	d1.i = a;
	d1.j = b;
	d1.k = c;
	d1.sum = d1.i + d1.j + d1.k;
	cout<<"Sum :"<<d1.sum;
	return 0;
};
