#include<iostream>
using namespace std;
class A
{
public:
	virtual void speak()
	{
		cout<<"good speak"<<endl;
	} 	
	
};
class B:public A
{
public:
	virtual void speak()
	{
		cout<<"bad speak"<<endl;
	}
	
};
//�������Լ���д���ؼ̳У������������Ǹ�����̫�����ˣ��������޷����ֳ������˼�롣 
class D
{
	void gerat()
	
	{
	cout<<"������ɶ��û�У��뿴��һ��������"<<endl;
	} 
	void speak()
	{
		cout<<"���ǻ��൱�еĵ�ʵ����";
	}
	 
	
};
class C:public A,public D
{
public:
	void speak2()
	{
		cout<<"����speak2������������speak1����"<<endl;
	}
	void speak()
	{
		cout<<"not bad and not great too"<<endl;
	}	
};

int main()
{
	//����������ģ��һ�£������������������涼���麯������ô���ǻ���ʲô�仯�� 
	A *a=new B;
	a->speak();//�������൱�У������麯���Ļ����ͻ������������麯���ˡ���ʹ���������治д�麯��Ҳ�ᱻֱ�ӵ��õġ� 
	A *b=new A;//�����ַ�����˵���������ʵ��ǿ϶������A�е��麯���ˡ� 
	b->speak(); 
	cout<<"���ڿ�ʼ������д�Ķ��ؼ̳е����������"<<endl;
	C *c=new C;
	c->speak();
	c->speak2();
	cout<<"�ܺã�������������������ؼ̳еĶ���ָ��ı䣬ʹ����C�д����ռ�"<<endl; 
	A *d=new C;
	d->speak();//���ˣ�ֻҪ���������麯�����͸�û��ָ����һ�����ˡ�ͬ��Ҳ�������������������ĺ����� 
	return 0;
} 
