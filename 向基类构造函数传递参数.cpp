#include<iostream>
using namespace std;
class A{
public:
	A()
	{
		cout<<"����A�Ĺ��캯��һ"<<endl;
	}
	A(int x)
	{
		cout<<"����A���캯����"<<endl;
		cout<<"���ݽ���x��ֵ�� "<<x<<endl; 
	 } 
~A()
{
	cout<<"����A����������"<<endl; 
}



};
class B:public A{
public:
	B()
	{
		cout<<"����B�Ĺ��캯��һ"<<endl; 
	}
	B(int x)
	{
		cout<<"����B�Ĺ��캯����"<<endl;
		cout<<"���ݽ���B��x��ֵ�Ĵ�С��"<<x<<endl; 
	}
	~B()
	{
		cout<<"����B����������"<<endl; 
	}
}; 
int main()
{
	B b2(2);//�����յĽ�������ǿ��Կ������������ڵ�������Ķ����ʱ�򣬵��û���Ĺ��캯���ǲ����в������Ǹ����캯���� 
	return 0;
} 
