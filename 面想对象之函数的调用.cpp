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
Cat::Cat(int age)//��ʹҪд�����캯��������ĸ�ʽҲ����Ҫ�ģ� 
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
	std::cout<<"����һ�����ˣ�";
}


int main()
{
	Cat cat1(12);
	std::cout<<"��ֻè��������";
	std::cout<<cat1.getage()<<std::endl;//��ס������ֵ����Ҫ�����������д�ӡ���Ż���ʾ�����ģ� 
	cat1.dayin();
	cat1.setage(156);
	std::cout<<"\n"<<"�ڵ��ù��캯����ʱ�������ٵ�����ķ�������ʹ�����ֵ�����ı䣡��\n"<<std::endl;
	std::cout<<cat1.getage()<<"\n";//�ܺã���������ʵ�����ҵ��뷨������������ 
	return 0;
} 
