#include<iostream>
using namespace std;
int main()
{
	cout<<"i feel very good ,haha!"<<endl;
	int year[3];
	year[0]=12;
	year[1]=13;
	year[2]=14;
	for(int i=0;i<=2;i++)
	{
		printf("%d",year[i]);
	}
	cout<<endl;
	cout<<year[0]+year[1]+year[2]<<endl;//��Ȼ�����ֲ����������һ���ͷһ�����������е������ˡ� 
	return 0;
}
