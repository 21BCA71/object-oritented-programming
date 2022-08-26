#include<iostream.h>
#include<conio.h>
class test
{
	int n;
	public:
	test()
	{
		n=10;
		cout<<n;
	}
	~test()
	{
		cout<<"Object Destroyered";
	}
};
void main()
{
	clrscr();
	test obj;
	getch();
}