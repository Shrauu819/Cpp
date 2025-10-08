#include<iostream.h>
#include<conio.h>
void main()
{
int marks;
clrscr();
cout<<"Enter the marks";
cin>>marks;
if(marks>=90)
{
cout<<"A Grade";
}
else if(marks>=70)
{
cout<<"B Grade";
}
else if(marks>=50)
{
cout<<"C Grade";
}
else if(marks<=50)
{
cout<<"Fail";
}
getch();
}