#include<iostream>
#include<string.h>
using namespace std;

class Student{
	public:
	int id;
	char name[100];
	int age;
	char course[100];
}; 
int main()
{
	Student s,s1;
	cout<<"enter id =";
	cin>>s.id;
	cout<<"enter name =";
	cin>>s.name;
	cout<<"enter age=";
	cin>>s.age;
	cout<<"enter course =";
	cin>>s.course;
	

	cout<<"enter id =";
	cin>>s1.id;
	cout<<"enter name =";
	cin>>s1.name;
	cout<<"enter age=";
	cin>>s1.age;
	cout<<"enter course =";
	cin>>s1.course;
	
	cout<<"ID ="<<s.id<<endl;
	cout<<"NAME ="<<s.name<<endl;
	cout<<"AGE ="<<s.age<<endl;
	cout<<"COURSE ="<<s.course<<endl;
	
	cout<<"ID ="<<s1.id<<endl;
	cout<<"NAME ="<<s1.name<<endl;
	cout<<"AGE ="<<s1.age<<endl;
	cout<<"COURSE ="<<s1.course<<endl;
	
	return 0;
}

