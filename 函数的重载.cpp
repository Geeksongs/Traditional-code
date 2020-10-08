#include<iostream>//现在我们来写C++程序的函数重载，听起来都让人十分的激动啊！！哈哈哈啦啦！ 
int chongzai(int x);
double chongzai(double x);
long chongzai(long x);
using namespace std;//在很多情况下，直接写下这一句话就行啦，因此我们可以直接把这段代码变成我们的模板！ 
inline int chonhgzai(int x);
inline double chognzai(double x);
inline long chognzai(long x);//使用内嵌函数的方法可以使函数调用的效率得到大大地提升！ 
int main()
{
	cout<<chongzai(12)<<endl;
	cout<<chongzai(1113.545)<<endl;
	cout<<chongzai(90000000)<<endl;//最终这个的返回值我不是很清楚，他的返回值为什么不是正确的？奇怪 
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
	return (x+23);//虽然函数的重载成功了，但是返回值还是有一定的问题啊。 
}
