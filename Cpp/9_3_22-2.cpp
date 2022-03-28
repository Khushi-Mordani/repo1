//Khushi Mordani
//this pointer : Because of the "this pointer", the compiler knows whose member variables are to be called while calling the function through an object of that class
//Friend functions cannot be called using this pointer
#include<iostream>
using namespace std;

class ABC
{
	int a,b;
	public:
		void set(int a,int b)
		{
			this->a = a+b; //If we do not write "this",the compiler gets confused between which variable to choose where 
			this->b = a-b;
		}
		void get()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
		ABC greater(ABC a1)
		{
			if (a > a1.a)
			{
				return *this;
			}
			else
			{
				return a1;
			}
		}

};
int main()
{
	ABC ob1,ob2,ob3;
	int a,b;
	cin>>a>>b;
	ob1.set(a,b);
	ob1.get();
	ob3 = ob1.greater(ob2);
	cout<<"After:"<<endl;
	ob1.get();
	ob3.get();
	return 0;
}
