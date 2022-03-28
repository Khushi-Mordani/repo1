//Khushi Mordani
//Read with delimiters/seperators

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream input;
	string str,str2;
	input.open("data.txt");
	if(!input)
		cout<<"File did not open"<<endl;
	else
	{
		while(!input.eof())
		{
			input>>str>>str2;
			cout<<str<<'\t'<<str2<<endl;
		}
	}
	input.close();
}
