#include<iostream>
using namespace std;
class A
{
public:
	virtual void speak()
	{
		cout<<"good speak"<<endl;
	} 	
	
};
class B:public A
{
public:
	virtual void speak()
	{
		cout<<"bad speak"<<endl;
	}
	
};
//现在我自己来写多重继承，不按照它的那个程序，太复杂了，根本就无法体现出其核心思想。 
class D
{
	void gerat()
	
	{
	cout<<"这里面啥都没有！请看下一个方法！"<<endl;
	} 
	void speak()
	{
		cout<<"这是基类当中的的实函数";
	}
	 
	
};
class C:public A,public D
{
public:
	void speak2()
	{
		cout<<"这是speak2函数，而不是speak1函数"<<endl;
	}
	void speak()
	{
		cout<<"not bad and not great too"<<endl;
	}	
};

int main()
{
	//现在我们来模拟一下，如果基类和派生类里面都有虚函数，那么我们会有什么变化。 
	A *a=new B;
	a->speak();//在两个类当中，均是虚函数的话，就会调用派生类的虚函数了。即使派生类里面不写虚函数也会被直接调用的。 
	A *b=new A;//用这种方法来说，毫无疑问的是肯定会调用A中的虚函数了。 
	b->speak(); 
	cout<<"现在开始运行我写的多重继承的这个函数了"<<endl;
	C *c=new C;
	c->speak();
	c->speak2();
	cout<<"很好，现在我们来将这个多重继承的对象指向改变，使其在C中创建空间"<<endl; 
	A *d=new C;
	d->speak();//对了，只要是引用了虚函数，就跟没有指针是一样的了。同样也会仅仅调用我们派生类的函数。 
	return 0;
} 
