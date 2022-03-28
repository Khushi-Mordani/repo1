//Khushi Mordani
//Example : read()

#include<iostream>
#include<fstream>
using namespace std;

class student
{
	public:
		int roll;
		char name[25];
		float marks;
		/*void getdata()
		{
			cout<<"Enter roll number and name:"<<endl;
			cin>>roll>>name;
			cout<<"Marks:"<<endl;
			cin>>marks;
		}
		void addrecord()
		{
			fstream f;
			student s1;
			f.open("student.dat",ios::app|ios::binary);
			s1.getdata();
			f.write((char*)&s1,sizeof(s1));
			f.close();
		}*/
		void disp()
		{
			fstream f;
			student s;
			f.open("student.dat",ios::in | ios::binary);
			f.read((char*)&s, sizeof(s));
			cout<<"Roll "<<s.roll<<" Name"<<s.name<<" Marks"<<s.marks<<endl;
			f.close();	
		}
};

int main()
{
	student s1;
	//s1.getdata();
	//s1.addrecord();
	s1.disp();
	return 0;
}
	
