#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int id;
		char name[30];
	private:
		void get()
		{
			cout<<"Enter id and name:";
			cin>>id>>name;
		}
		void put()
		{
			cout<<"ID:"<<id<<"\nName:"<<name;
		}
};
	int main()
	{
		student obj;
		clrscr();
		obj.get();
		obj.put();
		getch();
	}