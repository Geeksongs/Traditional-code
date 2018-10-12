#include<iostream>
using namespace std;
class G
{
	public:
	G(); 
	~G()
	{} 
	void great()
	{
		cout<<"the hehe is "<<hehe<<endl;
	}
	int hehe;
};
G::G():
hehe(0)
{} 
int main()
{
	G g;
	g.great();
	return 0; 
} 
