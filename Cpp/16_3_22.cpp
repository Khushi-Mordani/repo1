//Khushi Mordani
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofile;
	ofile.open("data1.txt");
	ofile<<"Line one in the document"<<endl;
	ofile<<"Another line"<<endl;

	cout<<"To the terminal"<<endl;
	ofile.close();
	return 0;
}
