#include<iostream.h>
#include<conio.h>
class student
{

	int id;
	char name[30];
	public:
		void get()
		{
			cout<<"Enter your id and name:";
			cin>>id>>name;
		}
		void put()
		{
			cout<<"Your id:"<<id<<"\nYour name:"<<name;
		}
};
int main()
{
	student s;
	clrscr();
	s.get();
	s.put();
	getch();
	return 0;
}

