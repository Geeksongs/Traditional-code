//现在我们来创建一个指针数组
#include<iostream>
using namespace std;
class A
{
public:
void great();
void great2();	
private:
int age;	
};
int main()
{
	A *a=new A[5]; 
	//由于书上的一些概念讲解得过于模糊，因此我还是没能够理解其中的含义。 
	//具体的含义还是得参考另外一本讲解得更加透彻的书了。 
	return 0;
} 
