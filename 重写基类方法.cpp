#include<iostream>//�������������ǻ��൱�еĺ��� 
using namespace std;
class A
{
public:	
	void good()
	{
		cout<<"����A�൱�еķ���";	
	} 
	void good(int x)
	{
		cout<<"�������x�Ĵ�С�� "<<x<<endl; 
	}
};
class B:public A
{
public:
void good()
	{
		cout<<"����B�൱������д�ĵķ���"<<endl; 
	}
	void goos2()
	{
		cout<<"����B�൱������ӵķ���"; 
	}
};
int main()
{
	B b;
	b.good();
	b.A::good(10);//�������ַ���������ʾ�ص���A�еķ����� 
	b.goos2();
	return 0;
} 
