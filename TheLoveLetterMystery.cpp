#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	string s;
	while(n--)
	{
		count=0;
		cin>>s;
		for(int i=0;i<(s.length()/2);i++)
			count+=abs((int)s[i]-s[s.length()-i-1]);
		cout<<count<<"\n";
	}
}
