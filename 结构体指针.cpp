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
	stu.name=123;//����д��������ֱ�ӷ����������������ȻҲ���д��벹ȫ�Ĺ��ܣ��� 
	stu.fees=123.0;
	printf("%d\n%f",p->name,p->fees);//һ��Ҫѧ��ʹ�����ֽṹ��ָ��ķ�������Ȼ�Ļ��������ǳ����صġ� 
	return 0;
}
