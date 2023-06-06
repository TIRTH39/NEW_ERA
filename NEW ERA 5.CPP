#include<iostream>
#include<string.h>
using namespace std;

class Time
{
    int hour,min,sec;
};

int main()
{
	Time t;

	cout<<"enter the second=";
	cin>>t.sec;

	t.hour=t.sec/3600;
	t.min=(t.sec%3600)/60;
	t.sec=(t.sec%3600)%60;

	cout<<"time=";
	cout<<":"<<t.hour;
	cout<<":"<<t.min;
	cout<<":"<<t.sec;
}
