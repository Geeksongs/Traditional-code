#include<iostream>
using namespace std;
class G
{
	public:
	G(); 
	~G();//运算符的重载，如果构造函数打上了花括号，那么后面的析构函数也应该打上花括号。  
	void great()//这是一种十分重要的格式！ 构造函数和析构函数的格式必须要相对应！ 
	{
		cout<<"the hehe is "<<hehe<<endl;
	}
	int hehe;
};
G::G():
hehe(0)
{} 
G::~G()
{
	
}
int main()
{
	G g;
	g.great();
	return 0; 
} 
