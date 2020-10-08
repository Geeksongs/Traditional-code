#include<stdio.h>
int main()
{
	struct Peo
	{
		int name;
		int great;	
	};
	struct Peo k;//现在我们发现了，结构体不仅可以在main函授里面定义，也可以在main函数外面定义。 
	struct Peo *p;//目前还没有发现他们之间有什么不同啊，太神奇了哈哈。 
	p=&k;
	k.name=154;
	k.great=1111;
	printf("%d\n%d",p->name,p->great);
	return 0;
} 
