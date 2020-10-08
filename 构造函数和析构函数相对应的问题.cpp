#include<iostream>
using namespace std;
class G
{
public:
	G()
	{
	cout<<"如果构造函数和析构函数的格式相对应的话，则这句话将会输出\n";	
}//这句话确实是应征了构造函数和析构函数的格式必须相对应的问题哦！ 
	~G()
	{
	}; 
	void great()
	{
		cout<<"great";
	}		
};
int main()
{
	G g;
	g.great();	
	return 0; 
} 

 
