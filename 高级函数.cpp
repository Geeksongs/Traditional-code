#include<iostream>
using namespace std;
class A
{
public:
void great(int x ,int y);//û��ָ��,�Ҳ��ܹ�����ȥ�� 
void fanhui(int *m,int *n); 


} ; 
void A::fanhui(int *m=0,int *n=0,int x ,int y);
{
	*m=x;
	*n=y;
}

void A::great(int x,int y)
{//֮��������д����ΪҪ���Լ���Ϥһ������д������Ȼ�Ļ��������ܱ��ߵġ� 
	
	for(int i=1;i<=y;i++)
	{
		for(int j=1;j<=x;j++)//x�ǿ�ȣ�y�ǳ��� 
		{
			cout<<"*";
			if(j==x)
			{
				cout<<endl;
			}
		}
	}
}

int main()//һ���������ͻȻ������ָ��������š� 
{
	int j ,k;
	cout<<"�����·�����x�Ŀ�Ⱥ�Y�ĳ���"; 
	A a;
	cin>>x>>y;
	a.fanhui(int &m,int &n,int x,int y);
	cout<<"the m is:"<<*m<<"the n is"<<*n;
	a.great(j,k);
	cin>>x>>y;
	cout<<"������������ָ�������ص�ֵ�Ĵ�С��\n";	
	return 0;
}
