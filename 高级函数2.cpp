#include<iostream>
using namespace std;
class Chongzai
{
public:
	Chongzai(int x ,int y);
	Chongzai()
	{
		cout<<"�����������һ�����֣�˵�������سɹ���";//����ȷʵ�ɹ��ˣ����������д�µĳ�����ȫû�������� 
	}
	~Chongzai();// �Ҳ���֪��Ϊʲô������д�����Ĵ����������ȫһ�������Ǿ��޷������ˡ�̫�����ˡ� 
	void chong();//��Щʱ����������ǻ����һЩ���˸е�ʧ���Ĺ��ܣ� 
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
	Chongzai c(23,56);//��������������һ�¹��캯���ɡ� 
	cout<<"please the number x and number y in the following stage\n";
	cin>>x>>y;
	c.chong(x,y);
	c.chong();//�߼��������˼ʽ�������ɡ� 
	cout<<endl<<"this program is over\n";
	cout<<"the z is "<<z;//Z��δ�����ʱ�����СΪ0; 
	return 0;
}
