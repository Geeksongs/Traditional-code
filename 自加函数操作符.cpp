//��������������Լ�������һ���Լ������
#include<iostream>
using namespace std;
void ha(int *a,int *b)
{
	*a=*a+1;//�����ָ��Ĺ��ܾ�����ʵ���ˣ�Ҳ�ͻ��аɡ� 
	*b=*b+1;
} 
int ha1(int x)
{
	return x+1; 
} 
class A
{
public: 
	A(){
	}
	~A(){
	}
	int deidao(int k)
	{
			return (k+1);
	
	} 
};
class B
{
public:	
	B();
	~B();
	void great2()
	{
		
	}
};
int main()
{
	int x,y,z;
	z=23;
	x=3;
	A a;
	y=a.deidao(x);//������ǵõ��ĺ�������ֵ��һ����������������������������ֵ����ô���أ�
	//��������������ֵ����ô�����ķ���ֵ��С���޷���ʾ�����ˡ��������������չʾһ��������������ֵ�ĺ����� 
	ha(&x,&y);
	cout<<"the x is:"<<x<<"the y is :"<<y<<endl;
	cout<<"the x is "<<y;
	ha1(z);//ͨ��������ӣ��������˺��������return ����ֵ����ֻ�ں��������õ�ʱ����Է��� 
	cout<<"the z is "<<z;//�����ú�������ֵ�ͻ�ʧЧ�ˣ��������ֻ�ܹ��ôη���ֵ��ֵ������һ��ֵ 
	return 0;//��������ָ��Ҳ���Եġ� 
} 
