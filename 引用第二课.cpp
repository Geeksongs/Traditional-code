#include<iostream>
using namespace std;
int main()
{
	int a,*p=0;
	int &q=a;
	a=5;
	p=&a;
	cout<<"a的大小是："<<a<<endl;
	cout<<"*p的大小是："<<*p<<endl;
	cout<<"&q的大小是："<<q<<endl;
	cout<<"a的地址是："<<&a<<endl;
	cout<<"*p的地址是："<<p<<endl;
	cout<<"&q的地址是："<<&q<<endl; //最开始程序崩溃了是因为我没有定义指针的指向，这一点确实指针用少了！！ 
	//才会出现如此重大的失误啊! 
	return 0;
}
