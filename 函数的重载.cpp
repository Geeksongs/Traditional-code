#include<iostream>//����������дC++����ĺ������أ�������������ʮ�ֵļ��������������������� 
int chongzai(int x);
double chongzai(double x);
long chongzai(long x);
using namespace std;//�ںܶ�����£�ֱ��д����һ�仰��������������ǿ���ֱ�Ӱ���δ��������ǵ�ģ�壡 
inline int chonhgzai(int x);
inline double chognzai(double x);
inline long chognzai(long x);//ʹ����Ƕ�����ķ�������ʹ�������õ�Ч�ʵõ����������� 
int main()
{
	cout<<chongzai(12)<<endl;
	cout<<chongzai(1113.545)<<endl;
	cout<<chongzai(90000000)<<endl;//��������ķ���ֵ�Ҳ��Ǻ���������ķ���ֵΪʲô������ȷ�ģ���� 
	cout<<chongzai('b');
	return 0;
} 
int chongzai(int x)
{
	return x*2;
}
double chongzai(double x)
{
	return x*3;
}
long chongzai(long x)
{
	return x%1000;
}
char chongszai(char x)
{
	return (x+23);//��Ȼ���������سɹ��ˣ����Ƿ���ֵ������һ�������Ⱑ�� 
}
