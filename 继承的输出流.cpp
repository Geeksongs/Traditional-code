//现在我们来写一个有关继承的基本程序
#include<iostream>
using namespace std;
class A
{
public:
	A(){//这个例子告诉我，如果我们想写出构造方法，则我们的构造方法里面是必须有东西的，即是没有，格式也是要打好的。 
	cout<<"这是A类的构造函数"<<endl;
	
	}
	~A(){
		cout<<"这是A的析构函数"<<endl;
	}
	void great();
	void great2();
protected://protected关键字是对派生出来的类是可见的，但是对主函数是无效的。果真如此啊！十分有意思的。 
	int age=13;	
};
void A::great()
{
	cout<<"this is great"<<endl;
}
void A::great2()
{
	cout<<"this is not great"<<endl;
}
class B:public A
{
public://还行吧， 这里用到了方法的重写以及添加(不是方法的重载） 但具体protected的用法我还在是不清楚。 
B(){
	cout<<"这是B类的构造函数"<<endl;
	
}
~B(){
	cout<<"这是B的析构函数"<<endl; 
}
void great3()
{
	cout<<"the age2 is:"<<age2<<endl;
	cout<<"the age is:"<<age<<endl; 
}
	
	protected:
		int age2=12;
}; 
int main()
{
	A a;
	cout<<"这里是A类的方法"<<endl;
	a.great();
	a.great2();
	cout<<"这里是B类的方法"<<endl; 
	B b;
	b.great();
	b.great2();
	b.great3();
	return 0; 
} 
