#include<iostream>
using namespace std;//����һ���������ô���ֵ�����ӣ�����Ϊʲô����Ҳ��֪���� 
void swap(int &x,int &y); 
int main()
{
	int a,b;
	cout<<"�����·��ֱ�����a��b��ֵ\n";
	cin>>a>>b;
	swap(a,b);
	cout<<"�µ�a�Ĵ�С��"<<a<<endl<<"�µ�b�Ĵ�С��"<<b<<endl; 
	return 0;
} 
void swap(int &x,int &y)
{
	int t;
	t=y;
	y=x;
	x=t;//ϣ���ܹ�һ�γɹ��� ��Ȼû���ܹ�һ�γɹ�������ȷʵ��������������ֵ��Ҫ����һЩ�ˣ� 
}
