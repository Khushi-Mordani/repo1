//Khushi Mordani
//Abstract class
#include<iostream>
using namespace std;
class convert
{
	protected:
		double var1;
		double var2;
	public:
		convert(double i)
		{
			var1 = i;
		}
		double getconv()
		{
			return var2;
		}
		double getinit()
		{
			return var1;
		}
		virtual void compute() = 0;
};

class l_to_g : public convert
{
	public:
	l_to_g(double i) : convert(i){}
	void compute()
	{
		var2= var1/3.7854;
	}
};

class f_to_c : public convert
{
	public:
	f_to_c(double i):convert(i){}
	void compute()
	{
		var2=(var1-32)/1.8;
	}
};

int main()
{
	convert *p;
	l_to_g lgob(4);
	f_to_c fcob(70);
	p = &lgob;
	cout<< p-> getinit() <<" litres is:";
	p->compute();
	cout<<p->getconv()<<"gallons"<<endl;
	p = &fcob;
	cout<< p-> getinit() <<"in farenhits is:";
	p->compute();
	cout<<p->getconv()<<"Celcius"<<endl;
}

