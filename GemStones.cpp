#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i=0,minct,res=0;
	cin>>n;
	string *s=new string[n];
	while(i<n)
	{
		cin>>s[i];
		i++;
	}
	for(char ch='a';ch<='z';ch++)
	{
		minct=count(s[0].begin(),s[0].end(),ch);
		for(int i=1;i<n;i++)
		{
			int ct=count(s[i].begin(),s[i].end(),ch);
			if(minct>ct)
			{
				minct=ct;
			}
		}
		res+=minct;
	}
	cout<<res<<"\n";
}
