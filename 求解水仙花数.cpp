#include<stdio.h> 
int main()
 	{	
		int a,b,c;
		for(a=1;a<=9;a++)
		{
			for(b=1;b<=9;b++)
			{
				for(c=1;c<=9;c++)
				{
					if((a*100+b*10+c)==(a*a*a+b*b*b+c*c*c))
					{
					printf("ˮ�ɻ�����%d\n",a*100+b*10+c);	
					}
				} 
				 
			}
		}

		return 0; //�������ʵ����̫���ˣ�һ���Ӿ�����˴𰸡�û��ʲô�Ѷȵġ� 
	} 
 
