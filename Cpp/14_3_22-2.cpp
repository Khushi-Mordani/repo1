//Khushi Mordani
//Exception handling in OOP

#include<iostream>
using namespace std;

class Test
{
	int x;
	public:
		void read()
		{
			cout<<"Enter a number:";
			cin>>x;
		}
		//nested classes
		/*class EVEN{}; //Abstract class
		//Abstract class */
		class EVEN
		{
			public:
				int a;
				EVEN(int p)
				{
					a = p;
				}
				void disp()
				{
					cout<<"a="<<a;
				}
		};
		class ODD{}; 
		void check()
		{
			if(x%2==0)
				throw EVEN(); //raise exception
			else 
				throw ODD();
		}
};

int main()
{
	Test t1;
	t1.read();
	try
	{
		t1.check();
	}
	catch(Test :: EVEN)
	{
		cout<<"Number is even"<<endl;
	}
	catch(Test :: ODD)
	{
		cout<<"Number is odd"<<endl;
	}
	Test t2;
	t2.disp();
	EVEN E1(50);
	t2.E1.disp();
	return 0;
}	
