#include<stdio.h>
int main()
{
	float n,m;
	float s;
	printf("请在下方输入n和m的值，然后我就可以算出其子序列的和\n");
	scanf("%f%f",&n,&m);
	s=0;
	for(;n<=m;n++)
	{
		s=(float)((1/n*n)+s);
		n=n+1;
	}
	printf("最终的大小是%f",s); //最终此程序以失败告终，哎。不知道问题出在哪里了哎，这么简单的题目。 

	return 0;
} 
