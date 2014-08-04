#include<iostream>
using namespace std;
int main()
{
	int n,m,h;
	cin>>n;
	while(n--)
	{
		cin>>m;
		h=1;
		for(int i=1;i<=m;i++)
		{
			if((i%2)==0)
				h++;
			else
				h=2*h;
		}
		cout<<h<<"\n";
	}
	return 0;
}
