#include<iostream>
using namespace std;
int fanhui(int x,int *y,int *z);
int fanhui2(int x,int &y,int &z);
int main()
{
	int x,y,z;
	cout<<"please enter a number to work it out\n ";
	cin>>x;
	fanhui(x,&y,&z);
	cout<<"the x is"<<x<<endl<<"the y is "<<y<<endl<<"the z is "<<z<<endl<<"the program is over 1,thank you\n";
	fanhui2(x,y,z);
	cout<<"the x is"<<x<<endl<<"the y is "<<y<<endl<<"the z is "<<z<<endl<<"the program is over,thank you";
	return 0;
} 
int fanhui(int x,int *y,int *z)
{
	if(x>30)
	{
		*y=x*x*x;
		*z=x*x;
	}
	else//本来以为这段程序已经了然于胸，但实际上呢，漏洞百出！错误百出啊！有很多细节没有弄清楚。 
	{
		cout<<"your numnber is wrong ,sorry"<<endl;
	}
    return x;
} 
int fanhui2(int x,int &y,int &z)
{
	y=x*2;
	z=x*3;
	return x;//当我在写引用函数的时候，还是错了两个地方，因此我们要多写才能够积累经验！ 
}
