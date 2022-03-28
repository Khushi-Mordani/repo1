//Khushi Mordani
//Copy content of one file to another

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin,fout;
	string str;
	fin.open("data.txt");
	fout.open("data1.txt");
	char ch;
	//character by character
	/*while(!fin.eof())
	{
		fin.get(ch);
		fout<<ch;
	}*/
	//line by line
	while(!fin.eof())
	{
		getline(fin,str);
		fout<<str<<endl;
	}
	cout<<"Copied!"<<endl;
	fin.close();
	fout.close();
	return 0;
}
