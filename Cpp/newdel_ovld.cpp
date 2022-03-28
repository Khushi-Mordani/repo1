//Khushi Mordani
//New Delete operators overloading

#include<iostream>
using namespace std;

class loc
{
	int lon,lat;
	public:
		loc()
		{
			lon = 0;
			lat = 0;
			cout<<"Default constructor"<<endl;
		}
		loc(int a,int b)
		{
			lon = a;
			lat = b;
			cout<<"Parameterized constructor"<<endl;
		}
		void disp()
		{
			cout<<"Co-ordinates are"<<endl<<"longitude :"<<lon<<" "<<"Latitude :"<<lat<<endl;
		}
		void * operator new(size_t byte)
		{
			void *ptr;
			cout<<"Inside the overloaded new"<<endl;
			ptr = malloc(byte);
			if(ptr == NULL)
			{
				cout<<"Could not allocate the memory"<<endl;
			}
			return ptr;
		}
		void operator delete(void *ptr)
		{
			cout<<"Inside the overloaded delete"<<endl;
			free(ptr);
		}
		//Hw:overload new[] and delete[] and global overload
};

int main()
{
	loc L1,L2(10,20);
	L2.disp();
	
	loc *l = new loc(5,7);
	l->disp();
	
	delete l;
	int *pt = new int; //Overloaded new will not be called here,normal one will be called
	return 0;
}
