//Khushi Mordani
//function Template for swap

#include<iostream>
using namespace std;

template<class T,class U>
T swap(T t1,U u1)
{
	T temp;
	temp = t1;
	t1 = u1;
	u1 = temp;
	//cout<<"After swapping:"<<t1<<" "<<u1<<endl;
}
int main()
{
	int A = 50,B = 10;
	double a = 90, b = 100.89;
	string c1 = "abc", c2 = "xyz";
	swap(A,B);	//int int
	cout<<"After swapping:"<<A<<" "<<B<<endl;
	swap(a,b);	//double double
	cout<<"After swapping:"<<a<<" "<<b<<endl;
	swap(c1,c2);	//string string
	cout<<"After swapping:"<<c1<<" "<<c2<<endl;
	swap(A,b);	//int double
	cout<<"After swapping:"<<A<<" "<<b<<endl;
	return 0;
}
