//����������дһ���йؼ̳еĻ�������
#include<iostream>
using namespace std;
class A
{
public:
	A(){//������Ӹ����ң����������д�����췽���������ǵĹ��췽�������Ǳ����ж����ģ�����û�У���ʽҲ��Ҫ��õġ� 
	cout<<"����A��Ĺ��캯��"<<endl;
	
	}
	~A(){
		cout<<"����A����������"<<endl;
	}
	void great();
	void great2();
protected://protected�ؼ����Ƕ��������������ǿɼ��ģ����Ƕ�����������Ч�ġ�������˰���ʮ������˼�ġ� 
	int age=13;	
};
void A::great()
{
	cout<<"this is great"<<endl;
}
void A::great2()
{
	cout<<"this is not great"<<endl;
}
class B:public A
{
public://���аɣ� �����õ��˷�������д�Լ����(���Ƿ��������أ� ������protected���÷��һ����ǲ������ 
B(){
	cout<<"����B��Ĺ��캯��"<<endl;
	
}
~B(){
	cout<<"����B����������"<<endl; 
}
void great3()
{
	cout<<"the age2 is:"<<age2<<endl;
	cout<<"the age is:"<<age<<endl; 
}
	
	protected:
		int age2=12;
}; 
int main()
{
	A a;
	cout<<"������A��ķ���"<<endl;
	a.great();
	a.great2();
	cout<<"������B��ķ���"<<endl; 
	B b;
	b.great();
	b.great2();
	b.great3();
	return 0; 
} 
