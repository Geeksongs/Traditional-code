#include<iostream>
using namespace std;
int fanhui(int x,int *y,int *z);
int fanhui2(int x,int &y,int &z);
int main()
{
	int x,y,z;
	cout<<"please enter a number to work it out\n ";
	cin>>x;
	fanhui(x,&y,&z);
	cout<<"the x is"<<x<<endl<<"the y is "<<y<<endl<<"the z is "<<z<<endl<<"the program is over 1,thank you\n";
	fanhui2(x,y,z);
	cout<<"the x is"<<x<<endl<<"the y is "<<y<<endl<<"the z is "<<z<<endl<<"the program is over,thank you";
	return 0;
} 
int fanhui(int x,int *y,int *z)
{
	if(x>30)
	{
		*y=x*x*x;
		*z=x*x;
	}
	else//������Ϊ��γ����Ѿ���Ȼ���أ���ʵ�����أ�©���ٳ�������ٳ������кܶ�ϸ��û��Ū����� 
	{
		cout<<"your numnber is wrong ,sorry"<<endl;
	}
    return x;
} 
int fanhui2(int x,int &y,int &z)
{
	y=x*2;
	z=x*3;
	return x;//������д���ú�����ʱ�򣬻��Ǵ��������ط����������Ҫ��д���ܹ����۾��飡 
}
