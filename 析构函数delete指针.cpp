#include<iostream>
using namespace std;
class Cat
{
public:
	Cat();//���캯�������������������ǹ��еģ������ſ��������������������ʱ�򱻵��ã� 
	~Cat();
	void diaoyong()
	{
		cout<<"age�Ĵ�С��*p1:"<<*p1<<endl;	
	}
	void diaoyong2()
	{
		cout<<"age2�Ĵ�С��*p2:"<<*p2<<endl;
	}
	void diaoyong3(int age)
	{
		age=age;
		cout<<"���������age�Ĵ�С�ǣ�"<<age<<endl; 
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
	p3->diaoyong2();//ţ�ƣ�һ�γɹ���ʵ���ˣ�
	p3->diaoyong3(45);//�����������������ָ�룬ʮ�ָ��ӣ��Ҿ�Ȼһ�γɹ��ˣ���������������ģ� 
	delete p3;
	return 0;
} 
