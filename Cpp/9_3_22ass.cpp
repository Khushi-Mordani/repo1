#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int marks;
	string name;
	public:
		int r_no;
		int getdata()
		{
			cout<<"Enter marks,name and roll number of student:";
			cin>>marks>>name>>r_no;
		}
		int printdata()
		{
			cout<<"Student name:"<<name<<" marks:"<<marks<<" Roll number:"<<r_no<<endl;
		}

};

int main()
{
	student S[3];
	student *ptr = S;
	for(int i=0;i<3;i++)
	{
		ptr->getdata();
		ptr->printdata();
	}
	return 0;
	
}
