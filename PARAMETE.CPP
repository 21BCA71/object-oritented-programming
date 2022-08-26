#include<iostream.h>
#include<conio.h>
class a
{
	int a,b;
	public:
	a(int x,int y)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout<<a<<" "<<b;
	}
};
void main()
{
	clrscr();
	a obj(10,20);
	obj.show();
	getch();
}