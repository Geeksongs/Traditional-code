#include<iostream>
using namespace std;
int main()
{
	int a;
	int &ak=a;
	a=7;
	cout<<"a�Ĵ�С�ǣ�"<<a<<endl;
	cout<<"a�����õĴ�С�ǣ�"<<ak<<endl;
	ak=9;
	cout<<"a�Ĵ�С�ǣ�"<<a<<endl;
	cout<<"a�����õĴ�С�ǣ�"<<ak<<endl; 
	return 0;//������һ��Ҳһ�ξͱ������гɹ��ˡ��Ͼ���ô�򵥣�������ǰ��ָ����˵�Ļ���̫���ˡ�	 
}
