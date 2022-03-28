//Khushi Mordani
//Function templates and static variables

#include<iostream>
using namespace std;

template<typename T>
void fun(const T &x)
{
	static int i =10;
	cout<<++i<<endl;
	return;
} 

int main()
{
	fun<int>(1);
	fun<double>(2);
	fun<int>(10.1);
	return 0;
}
