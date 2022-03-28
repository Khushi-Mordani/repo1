#include<iostream>
#include<ctime>
using namespace std;
class Time{
	private:
		int hr,min,sec;
	public:
		void settime()
		{
			time_t now = time(0);
			tm *ltm = localtime(&now);
			hr = ltm->tm_hour;
			min = ltm->tm_min;
			sec = ltm->tm_sec;
			
		}
		Time gettime()
		{
			Time a;
			a.settime();
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
			time_t now = time(0);
			tm *ltm = localtime(&now);
			day = ltm->tm_mday;
			month = ltm->tm_mon;
			year = ltm->tm_year;
		
		}
		Date getdate()
		{	Date a;
			a.setdate();
			a.day = a.day;
			a.month = a.month +1;
			a.year = a.year + 1900;
			return a;
		}
		Date setDOB(int d,int m,int y)
		{
			Date d1;
			d1.day = d;
			d1.month = m;
			d1.year = y;
			return d1;	
		}
		Date findage(Date d2)
		{
			Date d1,t,ans;
			d1 = t.getdate();
			ans.day = d1.day - d2.day;
			ans.month = d1.month - d2.month;
			ans.year = d1.year - d2.year;
			return ans;
		}
		

};

int main()
{
	//Time
	Time time1,time2,r;
	time1=time1.gettime();
	time2=time2.gettime();
	r = r.sleeptime(time1,time2);
	//Date
	Date date1,date2,temp,date3,age;
	date1=date1.getdate();
	cout<<"Today's date:"<<date1.day<<"-"<<date1.month<<"-"<<date1.year;
	int d,m,y;
	cout<<"Enter birthday:"<<endl;
	cin>>d>>m>>y;
	temp = date2.setDOB(d,m,y);
	age = date2.findage(temp);
	cout<<"Age :"<<age.day<<"-"<<age.month<<"-"<<age.year;
	return 0;
}
