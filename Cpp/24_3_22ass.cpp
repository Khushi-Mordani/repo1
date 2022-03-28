//Khushi Mordani
//Queue assignment

#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> q1;
	int n,s;
	cout<<"Enter size of queue and size of subset:";
	cin>>n>>s;
	int i;
	cout<<endl<<"Enter elements of queue:"<<endl;
	int arr[n];
	for(i =0;i<n;i++)
		cin>>arr[i];
	for(i = 0;i<n;i++)
		q1.push_back(arr[i]);
	queue<int> :: iterator p = q1.begin();
	while(p!=q1.end())
	{
		cout<<*p<<" ";
	}
	int num_subsets = n - s + 1;
	cout<<"Number of subsets:"<<num_subsets<<endl;
	
} 
