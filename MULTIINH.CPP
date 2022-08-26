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
class linux_based:public computer
{
	public:
	linux_based()
	{
		cout<<"I run on Linux";
	}
};
int main()
{
	clrscr();
	//class computer obj;
	class linux_based obj;
	getch();
	return 0;
}