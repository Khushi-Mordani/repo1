//Khushi Mordani
#include<iostream>
using namespace std;

class Real;
class Complex
{
	float real,img;
	public:
		Complex() //default constructor
		{
			real = 0;
			img = 0;
		}
		Complex(int a,int b) //Parameterized constructor
		{
			real = a;
			img = b;
		}
		void display()
		{
			cout<<"Real:"<<real<<" Imaginary:"<<img<<endl;
		}
		Complex operator +(Complex C) //addition operator overloading
		{
			Complex temp;
			temp.real = real + C.real ;
			temp.img = img + C.img;
			return temp;
		}
		Complex operator -(Complex C) //subtraction operator overloading
		{
			Complex temp;
			temp.real = real - C.real;
			temp.img = img - C.img;
			return temp;
		}
		Complex operator *(Complex C) //multiplication operator overloading
		{
			Complex temp;
			temp.real = real * C.real;
			temp.img = img * C.img;
			return temp;
		}
		friend Complex operator /(Complex C1,Complex C2);
		//friend Real operator %(Complex C1);
};

Complex operator /(Complex C1,Complex C2) //division operator overloading
		{
			Complex temp;
			temp.real = C1.real / C2.real;
			temp.img = C1.img / C2.img;
			return temp;
		}
class Real
{
	int a,b;
	public :
		Real()
		{
			a=0;
			b=0;
		}
		Real(int x,int y) //Parameterized constructor
		{
			a=x;
			b=y;
		}
		/*Real operator %(Complex C1)
		{
			Real t;
			t.a = C1.real % a;
			t.b = C1.img % b;
			return t;
		}*/

		//unary operator overloading
		void operator -()
		{
			a = -a;
			b = -b;
		}
		void operator --()
		{
			--a;
			--b;
			cout<<"prefix"<<endl;
		}
		Real operator --(int)
		{
			Real r;
			r.a = a--;
			r.b = b--;
			cout<<"Postfix"<<endl;
			return r;
		}
		friend void operator ++(Real &r); //unary operator overloading using friend function
		void disp()
		{
			cout<<"a:"<<a<<" b:"<<b<<endl;
		}

};
void operator ++(Real &r)
{
	cout<<"Prefix"<<endl;
	++r.a;
	++r.b;
}
int main()
{
	Complex c1(1,2),c2(3,4),c3;
	c1.display();
	c2.display();
	c3.display();
	//c3 = c1 + c2;
	c3 = c1.operator +(c2);
	c3.display();
	//c3 = c1 - c2;
	c3 = c1.operator -(c2);
	c3.display();
	//c3 = c1 * c2;
	c3 = c1.operator *(c2);
	c3.display();
	c3 = c1  / c2;
	//c3 = c1.operator /(c2);
	c3.display();
	Real B1(5,10),B2(3,4);
	B1.disp();
	B2.disp();
	Real B3(20,30);
	//B3 = c3 % B2;
	//B3 = B2.operator %(c3);
	-B3;
	B3.disp();
	Real B4;
	--B3;
	B3.disp();
	B4=B3--;
	B4.disp();
	Real R1(7,8);
	++R1;
	R1.disp();
	return 0;
}
