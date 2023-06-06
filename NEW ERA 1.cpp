#include<iostream>
#include<string.h>
using namespace std;

class Distance
{
	public :
    int feet,inch;
};

int main()
{
	Distance d1,d2,sum;
	
	cout<<"Enter the 1st distance"<<endl;
	cout<<"Enter the feet:";
	cin>>d1.feet;
	cout<<"Enter the inch:";
	cin>>d1.inch;
	
	cout<<"Enter the 2nd distance"<<endl;
	cout<<"Enter the feet:";
	cin>>d2.feet;
	cout<<"Enter the inch:";
	cin>>d2.inch;
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	
	cout<<"sum of distance"<<endl;
	cout<<"feet="<<sum.feet;
	cout<<"inch="<<sum.inch;
}
