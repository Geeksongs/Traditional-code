#include<iostream>
using namespace std;
class A
{
public:	
	A()
	{
		cout<<"这是A构造函数"<<endl; 
	}
	~A()
	{
		cout<<"这是A的析构函数"<<endl; 
	}
	
};
class B:public A
{
public:	
	B()
	{
		cout<<"这是B的构造函数"<<endl;
	}	
	~B()
	{
		cout<<"这是B的析构函数"<<endl; 
	} 
	
}; 
int main()
{
	A a;
	B b;//这里出现了一个规则，那就是最先创建的对象，最后才被删除。同时父类的构造函数也是最先被创建，最后被删除的。 
	return 0;//很有可能，这里就是引用了堆债的思想！我们的数据结构！ 
}//现在终于理解透彻了。 
