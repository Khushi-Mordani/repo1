//Khushi Mordani
#include<iostream>

using namespace std;
//function overloading/function polymorphism
class A{
	public:
		int a=1,b=2,c=3;
	
		int cubevolume(int l,int w)
		{
			return l*w;
		}
		float cubevolume(int l,int w,int h)
		{
			return l*w*h;
		}
		A cubevolume(int x,A a)
		{
			a.a = a.a + x;
			a.b = a.b + x;
			a.c = a.c + x;
			return a;
		}
		A cubevolume(A a,int x)
		{
			a.a = a.a - x;
			a.b = a.b - x;
			a.c = a.c - x;
			return a;
		}
		
};
int main()
{
	A a1;
	cout<<"Volume(2):"<<a1.cubevolume(1,2)<<endl;
	cout<<"Volume(3):"<<a1.cubevolume(1,2,3)<<endl;
	a1= a1.cubevolume(10,a1);
	cout<<"Length ="<<a1.a<<" Width ="<<a1.b<<" Height ="<<a1.c<<endl;
	a1= a1.cubevolume(a1,3);
	cout<<" Length ="<<a1.a<<" Width ="<<a1.b<<" Height ="<<a1.c<<endl;
	return 0;
}
