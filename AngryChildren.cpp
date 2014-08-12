#include<bits/stdc++.h>
#define MAX 100000
#define MAX_VAL 1000000000
using namespace std;
int main()
{
	int t,k,a[MAX],res=MAX_VAL;;
	cin>>t;
	cin>>k;
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	sort(a,a+t);
	for(int j=0,n=j+k-1;n<t;j++,n++)
	{
		res=min(res,a[n]-a[j]);
	}
	cout<<res<<endl;
	return 0;
}
