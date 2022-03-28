#include<iostream>
#include<string>
using namespace std;

class student
{
	public:
		int r_no;
		string name;
		void get()
		{
			cout<<"Enter roll number:"<<endl;
			cin>>r_no;
			cout<<"Enter student name:"<<endl;
			cin>>name;
			/*for(int i=0;i<10;++i)
			{
				cin>>name[i];
			}*/
		}
		
};
class test
{
	public:
		int marks[5];
		int getmarks()
		{
			cout<<"Enter marks of five subjects:"<<endl;
			for(int i=0;i<5;++i)
			{
				cin>>marks[i];
			}
		}
};
class result : public student,public test
{
	public:
		int total;
		int pr;
		result()
		{
			total = 0;
			pr = 0;
		}
		int calc()
		{
			total = 0;
			pr = 0;
			for(int i=0;i<5;++i)
			{
				total =  total + marks[i];
			}
			pr = total/5;
		}
		int disp()
		{
			cout<<"Roll number of the student:"<<r_no<<" Name of the student:";
			cout<<name;
			/*for(int i=0;i<10;++i)
			{
				cout<<name[i];
			}*/
			cout<<endl;
			return 0;
		}
		void dis()
		{
			cout<<"Total marks:"<<total<<" Percentage:"<<pr<<endl;
		}
};

int main()
{
	result R1;
	R1.get();
	R1.getmarks();
	R1.disp();
	R1.calc();
	R1.dis();
	return 0;
}
