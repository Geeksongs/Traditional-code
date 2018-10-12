#include<iostream>//现在来命名一个名字空间 
using namespace std;
namespace Window//名字空间内的所有成员都是公有的。不能够声明为私有的。 
{
	int i=10;

	namespace Window2
	{
		void good2()
		{
			cout<<"这个是嵌套在第一个名字空间当中的第二个名字空间，希望能够成功显示出来！"<<endl;
		}
		
	}
	void good();
}
void Window::good()
{
	cout<<"这是我自己写出来的一个名字空间，希望这句话能够显示出来，说明我的程序编写成功了"<<endl;
}
	
  
int main()
{
	int i=20;
	Window::good();//不知道何种原因，这里还无法直接将good方法写出来？？神奇了。 
	Window::Window2::good2();
	using namespace Window;//这样的话，计算机就以为我们已经是在Window这个作用域当中运行了。 
	good();
	Window2::good2();
	cout<<"the i is"<<i;
	return 0;
}




