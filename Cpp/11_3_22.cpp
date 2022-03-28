//Khushi Mordani
//Exception handling is nothing but converting the error message into a user understandable error message
//try throw catch
#include<iostream>
using namespace std;

int main()
{
	int num1,num2,ans;
	cout<<"Enter two numbers:"<<endl;
	cin>>num1>>num2;
	try {
		if(num2!=num1)
		{
			float div = (float) num1/num2;
			if(div<0)
				throw 'e';
			cout<<num2<<endl;
			cout<<"n1/n2="<<div<<endl;
		}
		else
		{
			ans = num1/num2;
			cout<<"Result :"<<ans<<endl;
		}
	}
	catch(int e)
	{
		cout<<"Cannot divide by :"<<e<<endl;
		cout<<"Exception:Division by zero"<<endl;
	}
	catch(char st)
	{
		cout<<"Exception:Division is less than 1"<<endl;
	}
	catch(...)
	{
		cout<<"Exception:Unknown"<<endl;
	}
	cout<<"End of program!"<<endl;
	return 0;
}
