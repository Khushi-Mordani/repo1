//Khushi Mordani
//Class templates and static variables

#include<iostream>
using namespace std;

template<class T>
class Addition
{
	T val;
	public:
		static int a,b;
		Addition()
		{	
			a++;
			b++;
			//cout<<"a:"<<a<<" b:"<<b<<endl;
		}
};
template<class T>
int Addition<T>::a=0;
int Addition<T>::b=0;

int main()
{
	Addition<int> obj1;
	Addition<double> obj2;
	cout<<Addition<int>::a<<endl;
	cout<<Addition<double>::b<<endl;
	cout<<Addition<int>::a<<endl;
	cout<<Addition<double>::b<<endl;
	return 0;
}
