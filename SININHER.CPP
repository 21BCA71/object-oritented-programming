#include<iostream.h>
#include<conio.h>
class electronicDevice
{
	public:
	electronicDevice()
	{
		cout<<"I am an electronic device\n\n";
	}
};
class computer:public electronicDevice
{
	public:
	computer()
	{
		cout<<"I am a Computer\n\n";
	}
};
int main()
{
	computer c;
	clrscr();
	c.computer();
	getch();
	return 0;
}