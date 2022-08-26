#include<iostream.h>
#include<conio.h>
class student
{

	int id;
	char name[30];
	public:
		void get();
		void put();

};
void student::get()
{
	cout<<"Enter your id and name:";
	cin>>id>>name;
}
void student::put()
{
	cout<<"Your id:"<<id<<"\nYour name:"<<name;
}
int main()
{
	student s;
	clrscr();
	s.get();
	s.put();
	getch();
	return 0;
}

