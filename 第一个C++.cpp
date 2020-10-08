#include<iostream>cx 
using namespace std;
void swapw(int& a,int& b)
{
	int t=a;
	a=b;
	b=t;
} 
int main()
{
	int a,b;
	a=3;
    b=123;
	swapw(a,b);
	cout<<a;	

	return 0;	
}  
