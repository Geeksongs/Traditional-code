#include<stdio.h>
int main()
{
	int n,m,x,y;
	printf("请在这里输入鸡和兔子的总数量，然后再输入他们的总腿数");
	scanf("%d%d",&n,&m);
	for(x=0;x<=1000;x++)
	{
		for(y=0;y<=1000;y++)
		{
			if((m==2*x+4*y)&&(n==x+y)) 
			printf("最终我们可以得到鸡的数目是%d,兔子的数目是%d\n",x,y);
		}
	}
	printf("如果没有出现答案，则我们可以知道您输入的数据有误\n"); 
return 0;	//总的来说这个算法算是完成了，但是依然具有很大的局限性，如果利用他的方法，则只有int对我们进行局限性。 
} 
