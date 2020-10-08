#include<stdio.h>
#include<time.h>
int main()
{
//现在我要来做一个阶乘的加法累加器
	int i,j,k,s,n;
	n=0;
	printf("请您在下方输入您需要累加的阶乘的最高项数\n");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		s=1; 
		for(k=1;k<=i;k++)
		{
		 s=s*k;	
		}
		n+=s;
	} 
	printf("最后阶乘的大小是%d\n",n);
	printf("%.6f",clock());//不知道为什么我这个clock函数并不管用啊！太奇怪啦。 
	return 0;//本程序最后输出的结果是不正确的，因此我还要对此程序进行一定的修改！ 
} //此程序这里运用用了三个十分基础的算法了！该供了一个地方就对了！s的赋值应该拿到大循环当中来的！ 
