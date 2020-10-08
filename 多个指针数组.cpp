#include<iostream>//这个程序是用来写10个指向类的指针的。（一个自己没有掌握好的知识点） 
using namespace std;
class A
{
public:
	void great()
	{
		cout<<"this is a good chance to understand\n"<<endl;
	}
	void great2(int x)
	{
		age=x*2;
	}
	void great3()
	{
		cout<<"the age is "<<age<<endl;
	}
private:
	int age=0;	
};
int main()
{
	A *p[10];
	A *a;
	//现在我们再来创建由一个指针所指向的10个对象。 
	A *b=new A[10];
	cout<<"这是b所指向的第一个对象所打印的值"<<endl;
	b->great3();//最终果然实现了！还行吧，明天还需要复习一下啦！ 
	cout<<"这是b所指向的第二个对象所打印的值"<<endl;
	(b+1)->great2(23);
	(b+1)->great3();
	for(int i=0;i<10;i++)
	{
	a=new A;//原来错在这里，每次我们都要创建一个新的自由存储区，不然的话，这是个指针我怎么知道它是指向A类的呢？ 
	a->great();//但是否可以每次不创建一个新的对象呢？ 当然不可以，这样的话，我们就无法使其指向类了。 
	a->great2(i);
	p[i]=a;
	}
	for(int k=0;k<10;k++)
	{
		p[k]->great3();
	}
	return 0;
}
