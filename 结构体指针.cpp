#include<stdio.h>
struct Peo
	{
		int name;
		double fees;		
	};
int main()
{
	struct Peo stu;
	struct Peo *p;
	p=&stu;
	stu.name=123;//代码写到这里我直接发现了这个编译器竟然也具有代码补全的功能！！ 
	stu.fees=123.0;
	printf("%d\n%f",p->name,p->fees);//一定要学会使用这种结构体指针的方法，不然的话，后果会非常惨重的。 
	return 0;
}
