//Khushi Mordani
//Hybrid inheritance, ambiguity check
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
/*class A
{
	public:
		int a;
		void hello()
		{
			cout<<"Inside hello function!"<<endl; 
		}
};*/
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
		void fun()
		{
			talk();
		}
};

class C : public doctor, public footballer  //multiple inheritance
{
	public:
		void cfun()
		{
			cout<<"Inside C function!"<<endl;
		}
		
};

/*class D : public C //D and E are inherited from C which is inherited from person and A
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
};*/
int main()
{
	C c1;
	c1.diagnose();
	c1.play();
	c1.talk(); //error,ambiguity occurs
	c1.fun(); //Indirectly calling talk function in footballer class (solves the ambiguity error)
	return 0;
}
