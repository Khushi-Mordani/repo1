//Khushi Mordani
//I/O and file handling
//open function
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream myfile;
	myfile.open("Students.txt",ios::in);
	if(!myfile)
		cout<<"The file could not be opened!"<<endl;
	else
		cout<<"File opened successfully!"<<endl;
	return 0;
}


