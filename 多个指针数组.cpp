#include<iostream>//�������������д10��ָ�����ָ��ġ���һ���Լ�û�����պõ�֪ʶ�㣩 
using namespace std;
class A
{
public:
	void great()
	{
		cout<<"this is a good chance to understand\n"<<endl;
	}
	void great2(int x)
	{
		age=x*2;
	}
	void great3()
	{
		cout<<"the age is "<<age<<endl;
	}
private:
	int age=0;	
};
int main()
{
	A *p[10];
	A *a;
	//������������������һ��ָ����ָ���10������ 
	A *b=new A[10];
	cout<<"����b��ָ��ĵ�һ����������ӡ��ֵ"<<endl;
	b->great3();//���չ�Ȼʵ���ˣ����аɣ����컹��Ҫ��ϰһ������ 
	cout<<"����b��ָ��ĵڶ�����������ӡ��ֵ"<<endl;
	(b+1)->great2(23);
	(b+1)->great3();
	for(int i=0;i<10;i++)
	{
	a=new A;//ԭ���������ÿ�����Ƕ�Ҫ����һ���µ����ɴ洢������Ȼ�Ļ������Ǹ�ָ������ô֪������ָ��A����أ� 
	a->great();//���Ƿ����ÿ�β�����һ���µĶ����أ� ��Ȼ�����ԣ������Ļ������Ǿ��޷�ʹ��ָ�����ˡ� 
	a->great2(i);
	p[i]=a;
	}
	for(int k=0;k<10;k++)
	{
		p[k]->great3();
	}
	return 0;
}
