#include<iostream>
typedef unsigned int ui;
using namespace std;
int main()
{
	ui a;
	ui *p=0;//��ָ���ֵ����0�����òſ���ʹ�����ǵ�ָ����г�ʼ������ 
	a=123;
	p=&a;
	cout<<"ָ�������ָ��ֵ�Ĵ�С��*p:"<<*p<<endl;
	cout<<"ֱ�����õ���ֵ�Ĵ�С��a��"<<a<<endl;
	return 0;//һ�α���ͳɹ��ˣ�˵������ȫ�����ָ������ĺ��壡�Ͼ���ǰѧ���Ĺ����� 
} 
