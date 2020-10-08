#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"请在下方分别输入b,c的值\n然后我将会对让它们输出更大的那一个了\n";
	cin>>b>>c;
	a=(b>c)?b:c;
	cout<<"其中他们当中更大的数应该是"<<a<<endl;//程序运行一次成功！！ 
	return 0;
} 
