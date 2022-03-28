#include<iostream>

using namespace std;

class Calculator
{
	public :
		int i1;
		int i2;
		void setip(int a,int b)
		{
			i1 = a;
			i2 = b;
		}
		int sum(int i1,int i2){
			return i1+i2;}
		int sub(int i1,int i2){
			return i1-i2;}
		int mul(int i1,int i2){
			return i1*i2;}
		int div(int i1,int i2)
		{
			float r;
			r=i1/i2;
			return r;
		}
		int fact(int i1)
		{
			int r=1;
			for(int i=i1;i>0;i--)
			{
				r=r*i;
			}
			return r;
		}

	
};

int main()
{
	int i1,i2,op;
	Calculator obj;			    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.Factorial"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<"Enter two numbers:";
			cin>>i1>>i2;
			cout<<"Sum:"<<obj.sum(i1,i2);break;
		case 2:
			cout<<"Enter two numbers:";
			cin>>i1>>i2;
			cout<<"Subtraction:"<<obj.sub(i1,i2);break;
		case 3:
			cout<<"Enter two numbers:";
			cin>>i1>>i2;
			cout<<"Multiplication:"<<obj.mul(i1,i2);break;
		case 4:
			cout<<"Enter two numbers:";
			cin>>i1>>i2;
			cout<<"Division:"<<obj.div(i1,i2);break;
		case 5:
			cout<<"Enter a number:";
			cin>>i1;
			cout<<"Factorial:"<<obj.fact(i1);break;
		default :
			cout<<"Enter valid operation";
	}
	return 0;
}
