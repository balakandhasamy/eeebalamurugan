#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char gt;
	cout<<"Enter a character: ";
	cin>>gt;
	if((gt>='a'&& gt<='z') || (gt>='A' && gt<='Z'))
	{
		cout<<gt<<" is an alphabet";
	}
	else
	{
		cout<<gt<<" is not an alphabet";
	}
	getch();
}
