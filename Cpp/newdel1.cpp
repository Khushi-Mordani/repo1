//Khushi Mordani
//New delete operations(1)

#include<iostream>
using namespace std;

class A
{
	public:
		int i,j;
		A()
		{
			i=0;
			j=10;
			cout<<"Inside the default constructor"<<endl;
		}
		~A()
		{
			cout<<"Inside the destructor"<<endl;
		}
};

int main()
{
	int *pt1,*pt2,sum;
	pt1 =  new int;
	pt2 = new int;
	A a1;
	cout<<"Before the new operator in A"<<endl;
	cout<<"Enter first number :";
	cin>> *pt1;
	cout<<"Enter second number :";
	cin>> *pt2;
	sum = *pt1 + *pt2;
	cout<<"Sum :"<<sum<<endl;
	delete pt1; //Destructor called
	delete pt2; //Destructor called
	A A1,*A2;
	A2 = new A[5]; //When we allocate memory using new,the construcor gets called 5 times
	//A2 = (A *)malloc((sizeof(A))*5); //When we allocate memory using malloc,the construcor does not get called
	cout<<A1.i<<" "<<A1.j<<endl;
	for(int k=0;k<5;k++)
	{
		cout<<A2[k].i<<" "<<A2[k].j<<endl;
	}
	//free(A2); //Destructor does not get called
	delete []A2; //Destructor called 5 times
	return 0;
}
