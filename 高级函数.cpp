#include<iostream>
using namespace std;
class A
{
public:
void great(int x ,int y);//没有指针,我不能够活下去！ 
void fanhui(int *m,int *n); 


} ; 
void A::fanhui(int *m=0,int *n=0,int x ,int y);
{
	*m=x;
	*n=y;
}

void A::great(int x,int y)
{//之所以这样写是因为要让自己熟悉一下这种写法，不然的话，后果会很悲催的。 
	
	for(int i=1;i<=y;i++)
	{
		for(int j=1;j<=x;j++)//x是宽度，y是长度 
		{
			cout<<"*";
			if(j==x)
			{
				cout<<endl;
			}
		}
	}
}

int main()//一创建对象就突然想玩玩指针变量来着。 
{
	int j ,k;
	cout<<"请在下方输入x的宽度和Y的长度"; 
	A a;
	cin>>x>>y;
	a.fanhui(int &m,int &n,int x,int y);
	cout<<"the m is:"<<*m<<"the n is"<<*n;
	a.great(j,k);
	cin>>x>>y;
	cout<<"现在我们来看指针所返回的值的大小了\n";	
	return 0;
}
