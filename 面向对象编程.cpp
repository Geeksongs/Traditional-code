#include<iostream>
using namespace std;
class Cat
{
public:
	int age=12;//没有设定似有和公有的类貌似是无法进行有效地使用的。 
	int name=123;
	int hanshu(int x)
	{	
		cout<<"让我们来看一下，这个函数是否能够成功运行出来\n";
		x=x*2;
		cout<<x<<endl;
		return 1;//这里即使有返回值也不会打印出来的，看得我一脸懵逼 ,因为只有在主函数当中打印才会出现返回值的！ 
	}	//这个函数成功运行出来了！这说明了我函数运用的正确性！ 
private:
	int age1=13;
public:
	void hanshu2()
	{
		cout<<"\n"<<age1+13;
		cout<<"让我们来看一下私有的数据类型是否可以在私有的情况下，被公有的所表达出来吧\n"; 
	}//事实证明，一个私有的数据类型是可以在公有的数据类型当中表达出来的。不然私有的数据类型又有什么用呢？ 
};

int main()
{
	Cat Great;
	cout<<Great.age<<endl;//果然是由于私有类的问题，从而导致了我的程序无法进行良好的运行！ 
	cout<<Great.name<<endl;
	Great.hanshu(123);
	cout<<Great.hanshu(123);//在这里打印一下，才会出现返回值的！ 
	Great.hanshu2();
	return 0;
} 

