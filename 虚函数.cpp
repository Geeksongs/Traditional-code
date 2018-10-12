#include<iostream>//现在我们来写一个虚函数，从而避免它的调用 
using namespace std;
class A
{
	public:
	void great()
	{
		cout<<"这是一个实函数,下面的B类的实函数不能够覆盖此函数，因为我是用指针来定义的"<<endl;
		
	}//这是一个实函数 
	virtual void great2()
	{
		cout<<"这是一个虚函数，它是不能够被调用的"<<endl; 
	}//这是一个虚函数 
};
class B:public A 
{
	public:
	void great2()
	{
		cout<<"这是在类B当中的实函数，他会覆盖类A当中的虚函数"<<endl; 
	
	} 
	void great()
	{
		cout<<"这是在类B当中的实函数，他应该不会覆盖类A当中的实函数,如出现则说明我们没有利用到指针来定义对象"<<endl;
	}
};
int main()
{
	A *a=new B;
	a->great();
	a->great2();
	cout<<"现在来考虑不用指针来定义的情况，类B的函数应该会做到完全的覆盖"<<endl;
	B b;
	b.great();
	b.great2();
	return 0; 
} 
