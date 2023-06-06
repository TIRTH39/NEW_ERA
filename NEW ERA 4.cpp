#include<iostream>
#include<string.h>
using namespace std;

class House
{
	public :
	int h_no;
	char h_name[100];
	char h_address[100];
	int h_room;
	int h_room_size;
};

int main()
{
	House h;
	h.h_no=50;
	strcpy(h.h_name,"RIVERA");
	strcpy(h.h_address,"kamrej");
	h.h_room=6;
	h.h_room_size=30;
	
	cout<<"House no.=>"<<h.h_no<<endl;
	cout<<"House name=>"<<h.h_name<<endl;
	cout<<"House address=>"<<h.h_address<<endl;
	cout<<"House room=>"<<h.h_room<<endl;
	cout<<"House room size=>"<<h.h_room_size<<endl;
}
