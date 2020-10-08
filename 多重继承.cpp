#include<iostream>
using namespace std;
//现在我们来写一个多重继承的程序 
class A
{
public:
	A()
	{
		cout<<"这是A类别当中的构造方法"<<endl;
	}
	~A()
	{
	} 
};
class B:public A
{
public:
	B()
	{
		cout<<"这是B类别当中的构造方法"<<endl; 
	 }
	~B()
	{
		
	}
	
	
};
class C:public B
{
	public:
	
	
	C()
	{
		cout<<"这是C类别当中的构造方法"<<endl;
	}
	~C()
	{
		
	}
	
	 
	};
int main()
{
	A a;
	cout<<endl;
	B b;
	cout<<endl;
	C c;//多重继承告诉了我，每次构造函数的调用都是建立在上一个类当中的，因此首先调用最开始的那一个类，然后再依次往下调用类的构造函数。 
	cout<<endl;
	return 0;
} 
