#include<iostream>
using namespace std;
int main()
{
	int *p=0,*a=0;//在最开始定义的时候，虽然已经为其腾出了内存空间，但是指针是没有指向的，因此没啥用处。 
	p=new int;
	*p=12;
	cout<<"*p的大小是："<<*p<<endl;
	delete p;
	p=new int;
	*p=123;
	cout<<"*p的大小是："<<*p<<endl;
	cout<<"程序结束运行！";
	delete p;
	a=new int;
	*a=143;
	cout<<"*a的大小是；"<<*a<<endl;
	delete a;
	*a=888;//这里我并没有在自由存储区开辟空间，就直接引用了指针也是完全没有问题的。 
	cout<<"*a的在直接定以后的大小是："<<*a<<endl; 
	return 0;
} 
