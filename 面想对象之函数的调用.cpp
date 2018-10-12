#include<iostream>
class Cat
{	
private:
	int itsage;
public:
	void setage(int age);
	int getage();
	void dayin();
	Cat(int age);
	~Cat(); 
};
Cat::Cat(int age)//即使要写出构造函数，这里的格式也很重要的！ 
{
	itsage=age;
}
Cat::~Cat()
{	
}
int Cat::getage()
{
	return itsage;
}
void Cat::setage(int age)
{
	itsage=age;
}
void Cat::dayin()
{
	std::cout<<"你是一个好人！";
}


int main()
{
	Cat cat1(12);
	std::cout<<"这只猫的年龄是";
	std::cout<<cat1.getage()<<std::endl;//记住！返回值必须要在主函数当中打印，才会显示出来的！ 
	cat1.dayin();
	cat1.setage(156);
	std::cout<<"\n"<<"在调用构造函数的时候，我们再调用类的方法继续使年龄的值发生改变！！\n"<<std::endl;
	std::cout<<cat1.getage()<<"\n";//很好！我完美地实现了我的想法啦！哈哈哈！ 
	return 0;
} 
