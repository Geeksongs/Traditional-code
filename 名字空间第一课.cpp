#include<iostream>//����������һ�����ֿռ� 
using namespace std;
namespace Window//���ֿռ��ڵ����г�Ա���ǹ��еġ����ܹ�����Ϊ˽�еġ� 
{
	int i=10;

	namespace Window2
	{
		void good2()
		{
			cout<<"�����Ƕ���ڵ�һ�����ֿռ䵱�еĵڶ������ֿռ䣬ϣ���ܹ��ɹ���ʾ������"<<endl;
		}
		
	}
	void good();
}
void Window::good()
{
	cout<<"�������Լ�д������һ�����ֿռ䣬ϣ����仰�ܹ���ʾ������˵���ҵĳ����д�ɹ���"<<endl;
}
	
  
int main()
{
	int i=20;
	Window::good();//��֪������ԭ�����ﻹ�޷�ֱ�ӽ�good����д�������������ˡ� 
	Window::Window2::good2();
	using namespace Window;//�����Ļ������������Ϊ�����Ѿ�����Window����������������ˡ� 
	good();
	Window2::good2();
	cout<<"the i is"<<i;
	return 0;
}




