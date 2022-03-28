//Khushi Mordani
//class template
#include<iostream>
using namespace std;

template<class T1,class T2>
class sample
{
	T1 a,b;
	public:
		void getdata()
		{
			cout<<"Enter A and B:"<<endl;
			cin>>a>>b;
		}
		void display()
		{
			cout<<"The values are:"<<endl<<"A="<<A<<"B="<<B<<endl;		
		}
};

int main()
{
	sample<int,int> S1;
	sample<int double> S2;
	sample<double double> S3;
	cout<<"Integer data:"<<endl;
	S1.getdata();
	S1.display();
	cout<<"Int and double data:"<<endl;
	s1.getdata();
	s1.display();
	cout<<"Double and double data:"<<endl;
	s1.getdata();
	s1.display();

	return 0;
}
