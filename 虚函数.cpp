#include<iostream>//����������дһ���麯�����Ӷ��������ĵ��� 
using namespace std;
class A
{
	public:
	void great()
	{
		cout<<"����һ��ʵ����,�����B���ʵ�������ܹ����Ǵ˺�������Ϊ������ָ���������"<<endl;
		
	}//����һ��ʵ���� 
	virtual void great2()
	{
		cout<<"����һ���麯�������ǲ��ܹ������õ�"<<endl; 
	}//����һ���麯�� 
};
class B:public A 
{
	public:
	void great2()
	{
		cout<<"��������B���е�ʵ���������Ḳ����A���е��麯��"<<endl; 
	
	} 
	void great()
	{
		cout<<"��������B���е�ʵ��������Ӧ�ò��Ḳ����A���е�ʵ����,�������˵������û�����õ�ָ�����������"<<endl;
	}
};
int main()
{
	A *a=new B;
	a->great();
	a->great2();
	cout<<"���������ǲ���ָ����������������B�ĺ���Ӧ�û�������ȫ�ĸ���"<<endl;
	B b;
	b.great();
	b.great2();
	return 0; 
} 
