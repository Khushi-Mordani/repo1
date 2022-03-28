//Khushi Mordani
//Using your own namespace by "using" keyword
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
	using namespace counterns; //To write this statement after including header files, a header file should be made which consists of the namespace and then include the header file and before main, write "using namespace counterns"
	upper = 100;
	lower = 0;
	counter ob1(10);
	int i;
	do{
		i = ob1.run();
		cout<<i<<" ";
	}while(i > lower);
	cout<<endl;
	counter ob2(20);
	do{
		i = ob2.run();
		cout<<i<<" ";
	}while(i > lower);
	cout<<endl;
	ob2.reset(100);
	lower = 90;
	do{
		i = ob2.run();
		cout<<i<<" ";
	}while(i > lower);
	cout<<endl;
	return 0;
}
