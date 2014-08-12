#include<iostream>
using namespace std;
int main()
{
	long long int n,m,tot=0,res,a,b,k;
	cin>>n>>m;
	while(m--)
	{
		
		cin>>a>>b>>k;
		tot=tot+(b-a+1)*k;
	}
	res=tot/n;
	cout<<res<<endl;
	return 0;
}
