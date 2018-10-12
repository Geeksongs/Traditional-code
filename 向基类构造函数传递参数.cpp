#include<iostream>
using namespace std;
class A{
public:
	A()
	{
		cout<<"这是A的构造函数一"<<endl;
	}
	A(int x)
	{
		cout<<"这是A构造函数二"<<endl;
		cout<<"传递进来x的值是 "<<x<<endl; 
	 } 
~A()
{
	cout<<"这是A的析构函数"<<endl; 
}



};
class B:public A{
public:
	B()
	{
		cout<<"这是B的构造函数一"<<endl; 
	}
	B(int x)
	{
		cout<<"这是B的构造函数二"<<endl;
		cout<<"传递进入B的x的值的大小是"<<x<<endl; 
	}
	~B()
	{
		cout<<"这是B的析构函数"<<endl; 
	}
}; 
int main()
{
	B b2(2);//从最终的结果上我们可以看到的是我们在调用子类的对象的时候，调用基类的构造函数是不带有参数的那个构造函数！ 
	return 0;
} 
