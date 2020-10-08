#include<stdio.h>
int main()
{
	int a=12;
	struct Po
	{
		int name;
		int great;
		int *p;//如果在这里定义了一个指针变量，那么我们首先应该在结构体类型外，创建一个结构体变量，然后才可以 
	}; //然后才可以调用我们所创建的结构体变量，而不能够直接就调用结构体变量了。 
	struct Po k;
	k.name=12333;
	k.great=387546;
	k.p=&a;
	printf("%d",*p);//反正无论如何的话，我们都不能将指针除了链表的情况下，直接引入的。 
	
	return 0; 
};
