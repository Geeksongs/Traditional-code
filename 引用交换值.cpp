#include<iostream>
using namespace std;//这是一个利用引用传递值的例子，具体为什么，我也不知道！ 
void swap(int &x,int &y); 
int main()
{
	int a,b;
	cout<<"请在下方分别输入a和b的值\n";
	cin>>a>>b;
	swap(a,b);
	cout<<"新的a的大小是"<<a<<endl<<"新的b的大小是"<<b<<endl; 
	return 0;
} 
void swap(int &x,int &y)
{
	int t;
	t=y;
	y=x;
	x=t;//希望能够一次成功！ 虽然没有能够一次成功，但是确实利用引用来传递值是要方便一些了， 
}
