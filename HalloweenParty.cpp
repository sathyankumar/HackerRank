#include<iostream>
using namespace std;
int main()
{
	long long int n,m,a,b,c,d,res;
	cin>>n;
	while(n--)
	{
		cin>>m;
		a=m/2;
		b=m%2;
		c=a+b;
		d=m-c;
		res=c*d;
		printf("%lld\n",res);
	}
	
	return 0;
}
