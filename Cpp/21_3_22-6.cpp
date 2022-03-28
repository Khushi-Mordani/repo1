//Khushi Mordani
//type non-type something

#include<iostream>
using namespace std;

template<class T,int N>
class myseq
{
	T memblock[N];
	public:
		void setmember(int x,T value);
		T getmember(int x);
};

template <class T,int N>
void myseq<T,N>::setmember(int x,T value)
{
	memblock[x] = value;
}

template<class T,int N>
T myseq<T,N> :: getmember(int x)
{
	return memblock[x];
}

int main()
{
	myseq<int,5> myints;
	myseq<double,5> myfloats;
	myints.setmember(0,100);
	myfloats.setmember(3,3.14);
	cout<<myints.getmember(0)<<endl;
	cout<<myfloats.getmember(3)<<endl;
	return 0;
}
