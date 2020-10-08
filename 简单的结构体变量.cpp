#include<stdio.h>
int main()
{
	struct Student//这是一个有关学生的结构体函数，我第一次使用，感觉它十分新颖和有趣！ 
	{
		int age;
		char firstname;
		char lastname[20];	
	}student1={12,'s',"ka"};//原来我错在了利用char定义单个字符的时候，不能够使用双引号来表示字符！ 
	printf("%d %c %s",student1.age,student1.firstname,student1.lastname);
	//为了能够弥补自己的过失，我决定继续定义一个结构体来完善我的理论
	struct Teacher
	{
		int age;
		float fees;
		double songs;
		char name[];
		char lastname;
	} teacher1={20,4000,5},teacher2;
	printf("现在我们来检验我的理论，如果系统不报错的话，那么我的理论就是成功了\n");
	printf("%d%f%lf%s%c",teacher1.age,teacher1.fees,teacher1.songs);
	//现在开始定义teacher2;
	teacher2.age=22;
	teacher2.fees=4500;
	teacher2.songs=teacher2.fees;
	printf("%d%f%lf\n",teacher2.age,teacher2.fees,teacher2.songs);
	printf("现在开始结束我的程序了！\n"); 
	return 0;
	//最终证明了，我的理论是错误的。因为我们不能够在拥有多个结构体变量的时候，仅对其中的某一个或不完全个结构体变量进赋值的！
	//这真的是相当的神奇啊！ 
}
  
