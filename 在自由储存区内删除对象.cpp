#include<iostream>
using namespace std;
class Cat
{
public:
	Cat(int x)
	{
		cout<<"构造函数被调用,我们可以已通过此函数来改变原来的年龄\n";
		age=x;
		cout<<"现在您的年龄是"<<age<<endl;	
	}
	~Cat()
	{
		cout<<"析构函数被调用"<<endl; 
	}
	void great()
	{
		cout<<"这是一个没有什么用处的函数"; 
	}
	//下面展示非内建函数的定义方法，在使其变成内建函数。
	void haha(); 
private:
	int age;	
};
void Cat::haha()
{
	cout<<"这是一个外建函数内建化的函数\n希望我能够熟悉它的使用\n"; 
}

int main()
{
	cout<<"创建一个对象";
	Cat cat(24);
	cout<<"创讲一个有指针的对象，并且在在自由存储区域内开辟新的空间\n";
	Cat *p=new Cat(25);
	cout<<"现在删除这个指针，应该会调用析构函数\n";
	delete p;//在删除的时候，我们删除的是地址，而自由空间是无法删除的。 
	cout<<"现在结束这个函数，应该会再次调用析构函数";
	cat.haha();
	p->haha();//这个时调用成功了的。牢牢记住这种形式！ 
	return 0;//最后结束cat的作用域，然后因为cat的作用域的结束再次调用析构函数。 
}

//这个程序相当重要！有很多知识点，明天还要继续复习这个程序！ 这个程序蕴含了所有创建对象的方法，十分重要！ 
