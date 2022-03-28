//Khushi Mordani
//class template

#include<iostream>
using namespace std;

template<class T>
class Addition
{
	public:
		T add(T n1,T n2)
		{
		T res;
		res = n1+n2;
		return res;
		}
};

int main()
{
	Addition<int> obj1;
	Addition<long> obj2;
	int a = 10, b = 20,c;
	long A = 11, B = 22,C;
	c = obj1.add(a,b);
	cout<<"Sum of integers:"<<c<<endl;
	C = obj2.add(A,B);
	cout<<"Sum of long:"<<C<<endl;
	return 0;
}
