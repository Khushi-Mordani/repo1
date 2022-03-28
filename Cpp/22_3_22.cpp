//Khushi Mordani
//Sample vector code

#include<iostream>
using namespace std;
#include<vector>

int main()
{
	vector<char> v(10);
	int i;
	cout<<"Size = "<<v.size()<<endl;
	for(i = 0;i<10;i++)
		v[i] = i + 'a';
	cout<<"Current contents:"<<endl;
	for(i=0; i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	cout<<"Expanding vector"<<endl;
	for(i=0;i<10;i++)
		v.push_back(i+10+'a');
	cout<<"Size now="<<v.size()<<endl;
	cout<<"Current contents:"<<endl;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	for(i=0;i<v.size();i++)
		v[i] = toupper(v[i]); //uppercase
	cout<<"Modified contents:"<<endl;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}
