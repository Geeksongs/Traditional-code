#include<stdio.h>
int main()
{
	float n,m;
	float s;
	printf("�����·�����n��m��ֵ��Ȼ���ҾͿ�������������еĺ�\n");
	scanf("%f%f",&n,&m);
	s=0;
	for(;n<=m;n++)
	{
		s=(float)((1/n*n)+s);
		n=n+1;
	}
	printf("���յĴ�С��%f",s); //���մ˳�����ʧ�ܸ��գ�������֪��������������˰�����ô�򵥵���Ŀ�� 

	return 0;
} 
