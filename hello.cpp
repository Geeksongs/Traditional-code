#include<iostream>//一遇到#说明这是一个处理标志！
void hanshu()
{
	std::cout<<"这里是我调用的一个函数\n"; 
} 
int main()
{
	std::cout<<"hello world!\n";
	std::cout<<"good for you\n"<<5;//在C++当中我们可以连续输出两个东西利用<<符号就可以了。 用于表示两个不同的类型。 
	std::cout<<"not good for me"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"另其一行";
	hanshu();
	std::cout<<"调用函数成功"; 
	std::cout<<"现在开始对各种变量的所占字节数进行探索\n";
	std::cout<<sizeof(bool);
	return 0;
} 
