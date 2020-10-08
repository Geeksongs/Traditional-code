#include<iostream>
typedef unsigned int ui;
using namespace std;
int main()
{
	ui a;
	ui *p=0;//让指针的值等于0，这让才可以使得我们的指针进行初始化！！ 
	a=123;
	p=&a;
	cout<<"指针变量所指的值的大小是*p:"<<*p<<endl;
	cout<<"直接引用到其值的大小是a："<<a<<endl;
	return 0;//一次编译就成功了！说明我完全理解了指针变量的含义！毕竟以前学过的哈哈。 
} 
