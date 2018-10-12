#include<iostream>
using namespace std;
//现在我们开始用静态变量的方式来表示一个数据 ,再来试试用类来改变静态变量的值看看有什么变化。 
class A
{
public:
	static int a;
	A()
	{
		a++;//在类当中就可以直接调用a的值而不用考虑其他关键字了。 
	}
	~A()
	{
		
	} 
	//现在我们将一个静态成员声明为私有的类型,在成员方法当中即可访问。
	static void main()
	{
		cout<<"这是一个静态函数，直接可以在我我们的主函数当中调用"<<endl;
	}
	void fangwen()
	{
		cout<<"这里我们可以输出k的值的大小是"<<k<<endl; 
	} 
private://静态成员变量不能够在类当中进行赋值。 
 	static int k; 
};
int A::a=0;
int A::k=30;
int main()
{
	cout<<"这是在调用都早函数时候A的大小："<<A::a<<endl;
	cout<<"现在我们来调用构造函数（即创建一个类）"<<endl;
	A a;
	cout<<"现在a的大小是"<<A::a<<endl; //用构造函数的方式来改变a的大小 
	a.fangwen();
	cout<<"当然我也可以通过创建一个指针对象来访问k的大小"<<endl;
	A *p=new A;//这次还算是比较完美地完成了本次程序的编写了啊。 
	p->fangwen();
	A::main();
	return 0;
} 
