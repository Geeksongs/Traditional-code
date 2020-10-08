#include<iostream>
using namespace std;
int main()
{
	enum l{a,b,c,d,e
	};
	l k;
	k=b;
	if(k==2)
	{
		cout<<"the k is good ";
	}
	else
	{
		cout<<"the k is not good";// 这次这个枚举型常量的程序正常运行了，并且做到了一次成功。 
	} 
	return 0;
} 
