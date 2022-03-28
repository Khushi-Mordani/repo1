//Khushi Mordani
#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap1(int &a,int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
int main()
{
	int x,y;
	cout<<"Enter two numbers:";
	cin>>x>>y;
	swap(&x,&y);
	cout<<endl<<"Call by value :"<<x<<" "<<y;
	swap1(x,y);
	cout<<endl<<"Call by reference :"<<x<<" "<<y;
	return 0;
}
