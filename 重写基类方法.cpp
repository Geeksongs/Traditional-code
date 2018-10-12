#include<iostream>//现在我们来覆盖基类当中的函数 
using namespace std;
class A
{
public:	
	void good()
	{
		cout<<"这是A类当中的方法";	
	} 
	void good(int x)
	{
		cout<<"您输入的x的大小是 "<<x<<endl; 
	}
};
class B:public A
{
public:
void good()
	{
		cout<<"这是B类当中所重写的的方法"<<endl; 
	}
	void goos2()
	{
		cout<<"这是B类当中所添加的方法"; 
	}
};
int main()
{
	B b;
	b.good();
	b.A::good(10);//利用这种方法可以显示地调用A中的方法！ 
	b.goos2();
	return 0;
} 
