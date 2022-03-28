//Khushi Mordani
#include<iostream>

using namespace std;
class XYZ;
class Distance{
	private:
		int feet,inch;
	public:
		Distance()//default constructor
		{
			cout<<"default constructor called";
		}
		Distance(int x,int y)//parameterized constructor
		{
			feet=x;
			inch=y;
			cout<<endl<<"Parameterized constructor"<<feet<<" "<<inch;
		}
		Distance(Distance &d)//copy constructor
		{
			feet = d.feet;
			inch = d.inch;
			cout<<endl<<"Copy constructor! feet and inch:"<<feet<<" "<<inch<<endl;
		}
		~Distance()//Destructor
		{
			cout<<"Destructor called"<<endl;
		}
		friend Distance add(XYZ X,Distance d);//Friend function
};
class XYZ{
	private:
		int x;
	public:
		XYZ set(int a)
		{
			x =a;
		}
		friend Distance add(XYZ X,Distance d);
};
Distance add(XYZ X,Distance d)
{
	d.feet = d.feet + X.x;
	d.inch = d.inch + X.x;
	cout<<endl<<"Feet :"<<d.feet<<"Inches:"<<d.inch;
	return d;
}
int main()
{
	Distance d1;
	Distance d2(4,5);
	//Distance d3(d2);
	//Distance d3 = d2;
	XYZ X;
	X.set(10);
	d2=add(X,d2);//Friend function called
	
	return 0;
}
