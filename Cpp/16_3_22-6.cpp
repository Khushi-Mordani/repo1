//Khushi Mordani
//seekp() and seekg()

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fp;
	char buf[100];
	int pos;
	fp.open("data.txt",ios::out|ios::ate);
	cout<<"Writing to a file"<<endl;
	fp<<"Line one"<<endl;
	fp<<"Line two"<<endl;
	pos = fp.tellp();
	cout<<"Current position:"<<pos<<endl;
	fp.seekp(-7,ios::cur);
	fp<<endl<<"Random data";
	fp.seekp(7,ios::beg);
	fp<<"Hello world!"<<endl;
	fp.close();
	cout<<"Done writing"<<endl;
	fp.open("data.txt");
	cout<<"Reading the file"<<endl;
	fp.seekg(0);
	while(fp.getline(buf,100))
		cout<<buf<<endl;
	pos = fp.tellg();
	cout<<"pos pointer is at:"<<pos<<endl;
	return 0;
	 
}
