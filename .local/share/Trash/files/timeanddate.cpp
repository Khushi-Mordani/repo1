#include<iostream>

using namespace std;
class Time{
	private:
		int hr,min,sec;
	public:
		void settime()
		{
			time_t now = time(0);
			char* dt = ctime(&now);
			cout<<"Current time:"<<dt<<endl;
		}
		Time gettime()
		{
			Time a;
			cout<<endl<<"Enter hours,minutes and seconds:";
			cin>>a.hr>>a.min>>a.sec;
			cout<<endl<<"Given time:"<<a.hr<<":"<<a.min<<":"<<a.sec;
			return a;
		}
		Time sleeptime(Time t1,Time t2)
		{
			Time t;
			t.hr= t1.hr-t2.hr;
			t.min= t1.min-t2.min;
			t.sec= t1.sec-t2.sec;
		cout<<endl<<"Difference:"<<t.hr<<":"<<t.min<<":"<<t.sec<<endl;
			return t;
		}
};
class Date{
	public:
		int day,month,year;
		Date setdate()
		{
			Date d;
			return d;
		}
		Date getdate()
		{
			Date a;
			a.setdate();
			return a;
		}
		

};

int main()
{
	Time time1,time2,r;
	time1=time1.gettime();
	time2=time2.gettime();
	r = r.sleeptime(time1,time2);
	
	return 0;
}
