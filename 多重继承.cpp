#include<iostream>
using namespace std;
//����������дһ�����ؼ̳еĳ��� 
class A
{
public:
	A()
	{
		cout<<"����A����еĹ��췽��"<<endl;
	}
	~A()
	{
	} 
};
class B:public A
{
public:
	B()
	{
		cout<<"����B����еĹ��췽��"<<endl; 
	 }
	~B()
	{
		
	}
	
	
};
class C:public B
{
	public:
	
	
	C()
	{
		cout<<"����C����еĹ��췽��"<<endl;
	}
	~C()
	{
		
	}
	
	 
	};
int main()
{
	A a;
	cout<<endl;
	B b;
	cout<<endl;
	C c;//���ؼ̳и������ң�ÿ�ι��캯���ĵ��ö��ǽ�������һ���൱�еģ�������ȵ����ʼ����һ���࣬Ȼ�����������µ�����Ĺ��캯���� 
	cout<<endl;
	return 0;
} 
