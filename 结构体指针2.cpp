#include<stdio.h>
int main()
{
	struct Peo
	{
		int name;
		int great;	
	};
	struct Peo k;//�������Ƿ����ˣ��ṹ�岻��������main�������涨�壬Ҳ������main�������涨�塣 
	struct Peo *p;//Ŀǰ��û�з�������֮����ʲô��ͬ����̫�����˹����� 
	p=&k;
	k.name=154;
	k.great=1111;
	printf("%d\n%d",p->name,p->great);
	return 0;
} 
