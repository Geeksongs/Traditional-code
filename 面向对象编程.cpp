#include<iostream>
using namespace std;
class Cat
{
public:
	int age=12;//û���趨���к͹��е���ò�����޷�������Ч��ʹ�õġ� 
	int name=123;
	int hanshu(int x)
	{	
		cout<<"����������һ�£���������Ƿ��ܹ��ɹ����г���\n";
		x=x*2;
		cout<<x<<endl;
		return 1;//���Ｔʹ�з���ֵҲ�����ӡ�����ģ�������һ���±� ,��Ϊֻ�������������д�ӡ�Ż���ַ���ֵ�ģ� 
	}	//��������ɹ����г����ˣ���˵�����Һ������õ���ȷ�ԣ� 
private:
	int age1=13;
public:
	void hanshu2()
	{
		cout<<"\n"<<age1+13;
		cout<<"����������һ��˽�е����������Ƿ������˽�е�����£������е�����������\n"; 
	}//��ʵ֤����һ��˽�е����������ǿ����ڹ��е��������͵��б������ġ���Ȼ˽�е�������������ʲô���أ� 
};

int main()
{
	Cat Great;
	cout<<Great.age<<endl;//��Ȼ������˽��������⣬�Ӷ��������ҵĳ����޷��������õ����У� 
	cout<<Great.name<<endl;
	Great.hanshu(123);
	cout<<Great.hanshu(123);//�������ӡһ�£��Ż���ַ���ֵ�ģ� 
	Great.hanshu2();
	return 0;
} 

