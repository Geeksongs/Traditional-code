#include<iostream>
using namespace std;
int main()
{
	int *p=0,*a=0;//���ʼ�����ʱ����Ȼ�Ѿ�Ϊ���ڳ����ڴ�ռ䣬����ָ����û��ָ��ģ����ûɶ�ô��� 
	p=new int;
	*p=12;
	cout<<"*p�Ĵ�С�ǣ�"<<*p<<endl;
	delete p;
	p=new int;
	*p=123;
	cout<<"*p�Ĵ�С�ǣ�"<<*p<<endl;
	cout<<"����������У�";
	delete p;
	a=new int;
	*a=143;
	cout<<"*a�Ĵ�С�ǣ�"<<*a<<endl;
	delete a;
	*a=888;//�����Ҳ�û�������ɴ洢�����ٿռ䣬��ֱ��������ָ��Ҳ����ȫû������ġ� 
	cout<<"*a����ֱ�Ӷ��Ժ�Ĵ�С�ǣ�"<<*a<<endl; 
	return 0;
} 
