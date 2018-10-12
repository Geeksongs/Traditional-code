#include<iostream>
using namespace std;
class Cat
{
public:
	Cat();//构造函数和析构函数还必须是公有的，这样才可以在主函数创建对象的时候被调用！ 
	~Cat();
	void diaoyong()
	{
		cout<<"age的大小是*p1:"<<*p1<<endl;	
	}
	void diaoyong2()
	{
		cout<<"age2的大小是*p2:"<<*p2<<endl;
	}
	void diaoyong3(int age)
	{
		age=age;
		cout<<"我们输入的age的大小是："<<age<<endl; 
	} 
private:
	int *p1;
	int *p2;
	int age;
		
};
Cat::Cat()
{
	p1=new int(6);
	p2=new int(10);
}
Cat::~Cat()
{
	delete p1;
	delete p2;
}
int main()
{
	Cat *p3=new Cat();	
	p3->diaoyong();
	p3->diaoyong2();//牛逼！一次成功！实现了！
	p3->diaoyong3(45);//这个程序利用了两重指针，十分复杂，我竟然一次成功了，这个给与了我信心！ 
	delete p3;
	return 0;
} 
