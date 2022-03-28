//Khushi Mordani
//Using read() and write() objects
//Example : write()

#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public:
		int roll;
		char name[25];
		float marks;
		void getdata()
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
		}
};

int main()
{
	student s;
	s.getdata();
	s.addrecord();
	return 0;
}

