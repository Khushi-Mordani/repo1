//Khushi Mordani
//Pointers to objects

#include<iostream>
using namespace std;

class ABC
{
	int a;
	public:
		ABC(int x)
		{
			a = x;
		}
		int get()
		{
			return a;
		}
};
int main()
{
	ABC ob[3]={10,20,30};
	ABC *ptr = ob;
	for(int i=0;i<3;i++)
	{
		cout<<ptr->get()<<endl;
		ptr++;
	}
	return 0;
}
