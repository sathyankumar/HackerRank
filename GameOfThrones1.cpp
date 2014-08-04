#include<iostream>
using namespace std;
int a[26];
int main(){
	string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			a[s[i]-97]++;
		}
		int cnt=0;
		for(int i=0;i<26;i++){
			if(a[i]%2!=0)
				cnt++;
		}
		if(cnt<=1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
}
