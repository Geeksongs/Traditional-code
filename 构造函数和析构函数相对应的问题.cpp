#include<iostream>
using namespace std;
class G
{
public:
	G()
	{
	cout<<"������캯�������������ĸ�ʽ���Ӧ�Ļ�������仰�������\n";	
}//��仰ȷʵ��Ӧ���˹��캯�������������ĸ�ʽ�������Ӧ������Ŷ�� 
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

 
