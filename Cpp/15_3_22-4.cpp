#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin;
	string str;
	fin.open("Students.txt");
	int count=0;
	char word[30];
	if(!fin)
		cout<<"File did not open"<<endl;
	else
	{
		/*while(!fin.eof())
		{
			fin>>word;
			count++;
		}	
		cout<<"Total words:"<<count<<endl;
		fin.close();
		//task : print total lines 
		while(getline(fin,str))
		{
			count++;
		}
		cout<<"Total lines:"<<count<<endl;*/
		//task : count white spaces
		while(getline(fin,str))
		{
			for(int i=0;i<str.length();i++)
			{
			if(str[i]==' ' || str[i]=='\t')
			//cout<<str<<" ";
			count++;
			}
		}
		cout<<"Total white spaces:"<<count<<endl;
		
	}
	return 0;
}
