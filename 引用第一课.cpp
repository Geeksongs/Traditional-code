#include<iostream>
using namespace std;
int main()
{
	int a;
	int &ak=a;
	a=7;
	cout<<"a的大小是："<<a<<endl;
	cout<<"a的引用的大小是："<<ak<<endl;
	ak=9;
	cout<<"a的大小是："<<a<<endl;
	cout<<"a的引用的大小是："<<ak<<endl; 
	return 0;//不错，这一次也一次就编译运行成功了。毕竟这么简单，比起以前的指针来说的话就太简单了。	 
}
