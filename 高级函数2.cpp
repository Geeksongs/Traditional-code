#include<iostream>
using namespace std;
class Chongzai
{
public:
	Chongzai(int x ,int y);
	Chongzai()
	{
		cout<<"如果出现了这一段文字，说明了重载成功！";//重载确实成功了，这和昨天我写下的程序完全没有两样！ 
	}
	~Chongzai();// 我并不知道为什么昨天我写下来的代码和这里完全一样，但是就无法运行了。太神奇了。 
	void chong();//有些时候编译器就是会出现一些让人感到失望的功能！ 
	void chong(int i,int j);
private:
	int age;
};

Chongzai::Chongzai(int x,int y)
{
	cout<<"the x is "<<x<<endl<<"the y is "<<y<<endl;
}

Chongzai::~Chongzai()
{
	
}
void Chongzai::chong()
{
	cout<<"is great";
}
void Chongzai::chong(int i,int j)
{
	age=i;
	cout<<"the age is "<<age<<endl<<"the y is "<<j<<endl;
}
int main()
{
	int x,y,z;
	Chongzai a;
	Chongzai c(23,56);//现在我们来重载一下构造函数吧。 
	cout<<"please the number x and number y in the following stage\n";
	cin>>x>>y;
	c.chong(x,y);
	c.chong();//高级函数的人际界面编程完成。 
	cout<<endl<<"this program is over\n";
	cout<<"the z is "<<z;//Z在未定义的时候，其大小为0; 
	return 0;
}
