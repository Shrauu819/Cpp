#include<iostream.h>
#include<conio.h>
void main()
{
int num;
clrscr();
cout<<"enter a year";
cin>>num;
if(num%4==0)
{
cout<<"Leap year";
}
else
{
cout<<"Not a leap year";
}
getch();
}