#include<iostream>
using namespace std;
int main()
{
	int ary[5];
	int i;
	cout<<"请在下方输入您需要输出的5个数字"<<endl; 
	for(i=0;i<5;i++)
	{
		cin>>ary[i];
	}
	cout<<"您输入的数字是："<<endl;
	for(i=0;i<5;i++)
	{
		cout<<ary[i]<<endl;
	}
	
	return 0;//数组实在是太简单了，因此我立刻就得到了该程序的正确输出结果！ 
} 
