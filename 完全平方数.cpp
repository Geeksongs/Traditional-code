#include<stdio.h>
int main()
{
	for(int a=1;a<=9;a++)
	{
		for(int b=0;b<=9;b++)
		{
			printf("%d\n",a*1100+b*11);//利用我的方法完全可以实现完全平方数的输出，但是为什么作者还要判断一次呢？ 
		}
	}
	return 0;
}
