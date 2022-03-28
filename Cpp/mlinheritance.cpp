//Khushi Mordani
//Multilevel inheritance
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

class doctor:public person
{
	public:
		int diagnose()
		{
			cout<<"Diagnose function"<<endl;
			return 0;
		}

};

class footballer:public person
{
	public:
		int play()
		{
			cout<<"Play football function"<<endl;
		}
};
class surgeon:public doctor
{
	public:
		int dis()
		{
			cout<<"I am the surgeon!"<<endl;
		}
};

int main()
{
	person P1(21,5.2,48.5);
	cout<<"For person:"<<endl;
	P1.disp();
	doctor D1;
	cout<<"For doctor:"<<endl;
	D1.talk();
	D1.walk();
	D1.disp();
	D1.diagnose();
	//cout<<"Weight of doctor"<<D1.weight;
	footballer F1;
	cout<<"For footballer:"<<endl;
	F1.talk();
	F1.walk();
	F1.disp();
	F1.play();
	surgeon S1;
	cout<<"For surgeon:"<<endl;
	S1.talk();
	S1.dis();
	return 0;
}
