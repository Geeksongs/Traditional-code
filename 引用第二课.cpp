#include<iostream>
using namespace std;
int main()
{
	int a,*p=0;
	int &q=a;
	a=5;
	p=&a;
	cout<<"a�Ĵ�С�ǣ�"<<a<<endl;
	cout<<"*p�Ĵ�С�ǣ�"<<*p<<endl;
	cout<<"&q�Ĵ�С�ǣ�"<<q<<endl;
	cout<<"a�ĵ�ַ�ǣ�"<<&a<<endl;
	cout<<"*p�ĵ�ַ�ǣ�"<<p<<endl;
	cout<<"&q�ĵ�ַ�ǣ�"<<&q<<endl; //�ʼ�������������Ϊ��û�ж���ָ���ָ����һ��ȷʵָ�������ˣ��� 
	//�Ż��������ش��ʧ��! 
	return 0;
}
