#include<iostream>
using namespace std;
int main()
{
	char a[200],b[200];
	cout<<"现在请您再次输入";
	cin.get(b,200);
	cout<<b;
	cin>>a;//如果在输入的时候我们输入了一个空格，则计算机自动认为这是字符串的结尾了。 
	cout<<a;	
	return 0;//在交换了顺序之后呢，我们就可以做到真正的成功了。 
} 
