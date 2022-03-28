//Khushi Mordani
//Hybrid inheritance
//structure : person -> doctor, footballer | person + A = C | C -> D,E
#include<iostream>
using namespace std;

class person
{
	public:
		int age;
		float height,weight;
		person()//default constructor
		{
			age = 0;
			height = 0;
			weight = 0;
		}
		person(int a,int h,int w)//parameterized constructor
		{
			age = a;
			height = h;
			weight = w;
		}
		void talk()
		{
			cin>>age>>height>>weight;
			cout<<"Talk function"<<endl;
		}
		void walk()
		{
			cout<<"Walk function"<<endl;
		}
		void disp()
		{
			cout<<"Age :"<<age<<" Height:"<<height<<" Weight:"<<weight<<endl;
		}
};
class A
{
	public:
		int a;
		void hello()
		{
			cout<<"Inside hello function!"<<endl; 
		}
};
class doctor:public person //Simple
{
	public:
		int diagnose()
		{
			cout<<"Diagnose function"<<endl;
			return 0;
		}

};

class footballer:public person//heirarchical (because doctor and footballer both are inherited from same class)
{
	public:
		int play()
		{
			cout<<"Play football function"<<endl;
		}
};

class C : public person, public A //multiple inheritance
{
	public:
		void cfun()
		{
			cout<<"Inside C function!"<<endl;
		}
};

class D : public C //D and E are inherited from C which is inherited from person and A
{
	public:
		void dfun()
		{
			cout<<"Inside D function!"<<endl;
		}
};
class E : public C //D and E are inherited from C which is inherited from person and A
{
	public:
		void efun()
		{
			cout<<"Inside E function!"<<endl;
		}
};
int main()
{
	person P1(21,5.2,48.5);
	cout<<"For person:"<<endl;
	P1.disp();
	doctor D1;
	cout<<"For doctor:"<<endl;
	//Simple inheritance
	D1.talk();
	D1.walk();
	D1.disp();
	D1.diagnose();
	//cout<<"Weight of doctor"<<D1.weight;
	footballer F1;
	cout<<"For footballer:"<<endl;
	F1.talk();
	F1.walk();
	F1.disp();
	F1.play();
	//Multiple inheritance
	C c1;
	c1.walk(); //function from person
	c1.hello(); //function from A
	//Heirarchical inheritance
	D d1;
	d1.cfun();//function from C
	E e1;
	e1.cfun();//function from C
	return 0;
}

