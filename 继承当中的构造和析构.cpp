#include<iostream>
using namespace std;
class A
{
public:	
	A()
	{
		cout<<"����A���캯��"<<endl; 
	}
	~A()
	{
		cout<<"����A����������"<<endl; 
	}
	
};
class B:public A
{
public:	
	B()
	{
		cout<<"����B�Ĺ��캯��"<<endl;
	}	
	~B()
	{
		cout<<"����B����������"<<endl; 
	} 
	
}; 
int main()
{
	A a;
	B b;//���������һ�������Ǿ������ȴ����Ķ������ű�ɾ����ͬʱ����Ĺ��캯��Ҳ�����ȱ����������ɾ���ġ� 
	return 0;//���п��ܣ�������������˶�ծ��˼�룡���ǵ����ݽṹ�� 
}//�����������͸���ˡ� 
