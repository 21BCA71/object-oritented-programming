#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void display()
	{
		cout<<"\nClass A:";
	}
};
class B:public A
{
	public:
	void display()
	{
		cout<<"\nClass B:";
	}
};
int main()
{
	clrscr();
	B obj;
	obj.display();
	//obj.print();
	obj.A::display();
	getch();
	return 0;
}