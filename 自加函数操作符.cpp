//这个程序用于我自己来构造一个自加运算符
#include<iostream>
using namespace std;
void ha(int *a,int *b)
{
	*a=*a+1;//最后这指针的功能就算是实现了！也就还行吧。 
	*b=*b+1;
} 
int ha1(int x)
{
	return x+1; 
} 
class A
{
public: 
	A(){
	}
	~A(){
	}
	int deidao(int k)
	{
			return (k+1);
	
	} 
};
class B
{
public:	
	B();
	~B();
	void great2()
	{
		
	}
};
int main()
{
	int x,y,z;
	z=23;
	x=3;
	A a;
	y=a.deidao(x);//最后我们得到的函数返回值是一个结果，但是如果有两个函数返回值该怎么办呢？
	//有两个函数返回值，那么函数的返回值大小就无法显示出来了。因此下面我们来展示一个返回两个函数值的函数！ 
	ha(&x,&y);
	cout<<"the x is:"<<x<<"the y is :"<<y<<endl;
	cout<<"the x is "<<y;
	ha1(z);//通过这个例子，我明白了函数如果用return 返回值，则只在函数其作用的时候可以返回 
	cout<<"the z is "<<z;//跳过该函数返回值就会失效了，因此我们只能够用次返回值赋值给另外一个值 
	return 0;//或者利用指针也可以的。 
} 
