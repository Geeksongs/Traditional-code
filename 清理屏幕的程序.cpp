#include<stdio.h>
#include<stdlib.h>
void delay(int x)
{
	int y,z;
	for(x=0;x>=0;x--)
	{
		for(y=0;y<=40000;y++)
		{
			
			for(z=0;z<=10000;z++);
		}
	}
}


int main()
{
	int i,j,k;

			for(k=0;k<=10;k++)
			{
				printf("��ã�������GeekSongSΪ�����ƵĲ����������ĵ��Խ�����ʮһ���Ӻ�ػ�%d\n",k);	
				delay(100000);
			}
			delay(10000);
			printf("�Բ����������ĵ��Խ���ػ�\n"); 
            system("shutdown -s -t 00");
		
} 


