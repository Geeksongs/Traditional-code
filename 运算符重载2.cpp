#include<iostream>
using namespace std;
class G
{
	public:
	G(); 
	~G();//����������أ�������캯�������˻����ţ���ô�������������ҲӦ�ô��ϻ����š�  
	void great()//����һ��ʮ����Ҫ�ĸ�ʽ�� ���캯�������������ĸ�ʽ����Ҫ���Ӧ�� 
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
