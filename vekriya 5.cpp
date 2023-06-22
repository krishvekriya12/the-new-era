#include<iostream>
#include<string.h>
using namespace std;

class House{
	private  :
	char house[100];
	int room;	
};

int main()

{
	House s;
	cout<<"enter house name =";
	cin>>s.house;
	cout<<"enter room =";
	cin>>s.room;
	cout<<"house ="<<s.house<<endl;
	cout<<"room ="<<s.room<<endl;
	
	return 0;
	
}


