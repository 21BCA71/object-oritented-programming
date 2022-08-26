#include<iostream.h>
#include<conio.h>
class cube
{
	int side;
	public:
		cube(int x)
		{
			side=x;
		}
		void display();
};
int main()
{
	int x;
	clrscr();
	cube c(10);
	c.display();
	cout<<"Enter Value of x:";
	cin>>x;
	cube s=cube(x);
	s.display();
	getch();
	return 0;
}
void cube::display()
{
	cout<<"cube side:"<<side;
}