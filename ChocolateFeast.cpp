#include<iostream>
using namespace std;
int main()
{
	int t,n,c,w,choc,nchoc;
	cin>>t;
	while(t--)
	{
		cin>>n>>c>>w;
		nchoc=n/c;
		choc=nchoc;
		while((choc/w)>0)
		{
			nchoc+=choc/w;
			choc=(choc/w)+(choc%w);
		}
		cout<<nchoc<<endl;
	}
	return 0;
}
