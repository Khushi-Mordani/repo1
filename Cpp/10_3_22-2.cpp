//Khushi Mordani
//Pure Virtual function (No defintion in base class): Runtime polymorphism

#include<iostream>
using namespace std;

class Shape
{
	protected:
		float x;
	public:
		void get()
		{
			cin>>x;
		}
		virtual float CalcArea() 
		{
			cout<<"Base bhai base!"<<endl;
		}
};

class square : public Shape
{
	public:
	float CalcArea()
	{
		return x*x;
	}
};

class Circle : public Shape
{
	public:
	void disp()
	{
		cout<<x;
	}
	/*float CalcArea()
	{
		return 3.14*x*x;
	}*/
};

int main()
{
	
	square sq1;
	Circle c1;
	sq1.get();
	cout<<"Area of square:"<<sq1.CalcArea()<<endl;
	c1.get();
	cout<<"Area of circle:"<<c1.CalcArea();
	return 0;
}

