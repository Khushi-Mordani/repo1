//Khushi Mordani
//Creating your own namespace

#include<iostream>
using namespace std;
namespace counterns
{
	int upper;
	int lower;
	class counter
	{
		int count;
		public:
			counter(int n)
			{
				if(n<=upper)
					count=n;
				else
					count=upper;
			}
			void reset(int n)
			{
				if(n<=upper)
					count = n;
			}
			int run()
			{
				if(count>lower)
					return count--;
				else
					return lower;
			}
	};
}

int main()
{
	counterns::upper = 100;
	counterns::lower = 0;
	counterns::counter ob1(10);
	int i;
	do{
		i = ob1.run();
		cout<<i<<" ";
	}while(i > counterns::lower);
	cout<<endl;
	counterns::counter ob2(20);
	do{
		i = ob2.run();
		cout<<i<<" ";
	}while(i > counterns::lower);
	cout<<endl;
	ob2.reset(100);
	counterns::lower = 90;
	do{
		i = ob2.run();
		cout<<i<<" ";
	}while(i > counterns::lower);
	return 0;
}
