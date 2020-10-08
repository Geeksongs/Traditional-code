#include<iostream>
using namespace std;//名字空间是一种十分让人感到恐惧的技术，因为我还没有对它进行学习。 
int main()
{
	char o,a,b,c,d;
	printf("haha");//这里应用printf竟然也是可行的，太神奇了。 
	o=cin.get();
	cout<<o<<endl;//这里用到的是单个字符的操作。后面我们来进行带参数的输入
	cout<<"开始重新输入";
	cin.get(a).get(b).get(c).get(d); 
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	return 0;
} 



