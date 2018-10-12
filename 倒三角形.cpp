#include<stdio.h>
int main()
{
	int a,b,c,d,i,j;
	printf("请在下面输出输入你需要多少层倒三角形\n");
	scanf("%d",&a);
	c=2*a+1;
	for(i=1;i<=a;i++)
	{
		for(d=1;d<=c;d++)
		{
			printf("*");
			if(d==(c-1))
			{
				printf("\n");
				for(j=0;j<i;j++)
				{
					printf(" ");//这个程序大致是跑起来了，但是还有一个细节需要我们去优化 ，但是我实在是想不出来一个该如何优化了。 
				}
			}
		}
		c=c-2;
	}
	
	return 0; 
} 

 
