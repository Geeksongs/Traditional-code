#include<stdio.h>
int main()
{
	int a,b,c,d,i,j;
	printf("�������������������Ҫ���ٲ㵹������\n");
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
					printf(" ");//�������������������ˣ����ǻ���һ��ϸ����Ҫ����ȥ�Ż� ��������ʵ�����벻����һ��������Ż��ˡ� 
				}
			}
		}
		c=c-2;
	}
	
	return 0; 
} 

 
