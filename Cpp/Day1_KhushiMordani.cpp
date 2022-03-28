#include<iostream>

using namespace std;

class Measure{
	public:
	int height,length,width;
	void setip(int h,int l,int w)
	{
		height = h;
		length = l;
		width = w;
	}
	int area();
	int volume()
	{
		return length*width*height;
	}
	Measure add(Measure,Measure);
};
int Measure :: area() //member function definition outside the class
	{
		int a;
		a = 2*(length*width + width*height + length*height);
		return a;
	}
Measure Measure :: add(Measure m1,Measure m2)
{
	Measure r;
	r.height = m1.height + m2.height;
	r.length = m1.length + m2.length;
	r.width = m1.width + m2.width;	
	return r;
	/*cout<<"Total height:"<<r.height;
	cout<<"Total width:"<<r.width;
	cout<<"Total length:"<<r.length;*/
}

int main()
{
	int h1,w1,l1,h2,w2,l2;
	Measure obj1;
	Measure obj2;
	Measure r;
	cout<<"Enter height,width and length for object1 :";
	cin>>h1>>w1>>l1;
	obj1.setip(h1,w1,l1);
	cout<<"Enter height,width and length for object2 :";
	cin>>h2>>w2>>l2;
	obj2.setip(h2,w2,l2);
	
	cout<<endl<<"Area and volume for object1:"<<obj1.area()<<" "<<obj1.volume();
	cout<<endl<<"Area and volume for object2:"<<obj2.area()<<" "<<obj2.volume()<<endl;
	r=obj1.add(obj1,obj2);
	cout<<"Total height:"<<r.height<<" Total width:"<<r.width<<" Total length:"<<r.length;
	return 0;
}

	
	

	
