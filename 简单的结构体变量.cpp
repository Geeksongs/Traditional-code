#include<stdio.h>
int main()
{
	struct Student//����һ���й�ѧ���Ľṹ�庯�����ҵ�һ��ʹ�ã��о���ʮ����ӱ����Ȥ�� 
	{
		int age;
		char firstname;
		char lastname[20];	
	}student1={12,'s',"ka"};//ԭ���Ҵ���������char���嵥���ַ���ʱ�򣬲��ܹ�ʹ��˫��������ʾ�ַ��� 
	printf("%d %c %s",student1.age,student1.firstname,student1.lastname);
	//Ϊ���ܹ��ֲ��Լ��Ĺ�ʧ���Ҿ�����������һ���ṹ���������ҵ�����
	struct Teacher
	{
		int age;
		float fees;
		double songs;
		char name[];
		char lastname;
	} teacher1={20,4000,5},teacher2;
	printf("���������������ҵ����ۣ����ϵͳ������Ļ�����ô�ҵ����۾��ǳɹ���\n");
	printf("%d%f%lf%s%c",teacher1.age,teacher1.fees,teacher1.songs);
	//���ڿ�ʼ����teacher2;
	teacher2.age=22;
	teacher2.fees=4500;
	teacher2.songs=teacher2.fees;
	printf("%d%f%lf\n",teacher2.age,teacher2.fees,teacher2.songs);
	printf("���ڿ�ʼ�����ҵĳ����ˣ�\n"); 
	return 0;
	//����֤���ˣ��ҵ������Ǵ���ġ���Ϊ���ǲ��ܹ���ӵ�ж���ṹ�������ʱ�򣬽������е�ĳһ������ȫ���ṹ���������ֵ�ģ�
	//��������൱�����氡�� 
}
  
