//在熟悉了简单的桶排序之后现在我们再来复习一下最基础的冒泡排序算法
#include<stdio.h>
int main()
{
	int a[5],t;
	printf("请您现在输入5个数，现在我将会利用冒泡排序算法将其排序\n");
	for(int i=0;i<5;i++) 
	scanf("%d",&a[i]); 
	for(int n=5;n>0;n--)//这里只进行了四次比较，这显得很自然，因为一共有五个数，用四次排序就可以了。 
	{
			
		for(int m=0;m<n;m++)
		{
			if(a[m]>a[m+1])
			{
				t=a[m+1];
				a[m+1]=a[m];
				a[m]=t;
			}
			else
			{
				
			} 
		}
	}
	for(int q=0;q<5;q++)
	printf("%d\t",a[q]);//冒泡排序成功！ 
	return 0;
} 
