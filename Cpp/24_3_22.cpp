//Khushi Mordani
//Algorithm : Remove copy
//Algorithm : Remove copy
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	char str[] = "Hello cjnhdkjc ckdhclkd kcnd";
	vector<char> v,v2(30);
	int i;
	for(i = 0;str[i];i++)
		v.push_back(str[i]);
	cout<<"Input sequence:"<<endl;
	for(i=0;i<v.size();i++)
		cout<<v[i];
	cout<<endl;
	//REMOVE COPY
	remove_copy(v.begin(),v.end(),v2.begin(),' ');
	cout<<"Result after removing spaces:"<<endl;
	for(i=0;i<v.size();i++)
		cout<<v2[i];
	cout<<endl;
	//REPLACE COPY
	replace_copy(v.begin(),v.end(),v2.begin(),' ',':');
	cout<<"Result after replacing spaces with colons:"<<endl;
	for(i=0;i<v.size();i++)
		cout<<v2[i];
	cout<<endl;
	return 0;
}
