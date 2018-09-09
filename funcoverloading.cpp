#include<iostream.h>
#include<conio.h>
void func()
{
cout<<"samiyal massy is calling the first parameterised function in the function of the functiuonm over riding";

}
void func(int x)
{
cout<<"samiyal massy is calling the second parameterised function"<<x<<endl;
}
void func(int x,int y,int z)
{
cout<<"samiyal massy is now calling the function having the three arguments and exploring the funtion overf riding"<<x<<y<<z;
}
void func(char*fun)
{
cout<<"character argument is called by the samiyal massy  and now it is "<<fun<<;
}
void main()
{

clrscr();
func();
func(12);
func(23,4,56);

char *var="samiyal massy is a good boy";
func(var);
getch();
}
