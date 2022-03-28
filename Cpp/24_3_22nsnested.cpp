//Khushi Mordani
//Nested namespace

#include<iostream>
using namespace std;

namespace ns1
{
	int i;
	namespace ns2{
		int j;
	}
}

int main()
{
	using namespace ns1;
	i = 19;
	ns2::j = 10;
	cout<<i<<" "<<ns2::j<<endl;
	cout<<i * ns2::j<<endl;
	using namespace ns2;
	j = 50;
	cout<<j<<endl;
	return 0;
}
