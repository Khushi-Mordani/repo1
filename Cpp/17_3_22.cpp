//Khushi Mordani
//function Templates
#include<iostream>
using namespace std;

template <typename T> //Same datatypes only
T sum(T n1, T n2)
{
	T rs;
	rs = n1 + n2;
	return rs;
}

template <class T,class U> //Different datatypes can be passed 
void multiply(T num1,U num2)
{
	cout<<"Multiplication:"<<num1*num2<<endl;
}

template<class T,typename U>
U divide(T num1,U num2)
{
	U div;
	div = num1/num2;
	cout<<"Division:"<<div<<endl;
	return div;
	
}
int main()
{
	int A = 10,B = 20, C;
	long a = 50.5, b = 22, c;
	float d;
	C = sum(A,B);
	cout<<"The sum of int:"<<C<<endl;
	c = sum(a,b);
	cout<<"The sum of long:"<<c<<endl;
	multiply(A,b);
	d = divide(a,B);
	cout<<"Division:"<<d<<endl;
	return 0;
}
