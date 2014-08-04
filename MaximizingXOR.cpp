#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a,b,max,x;
    max=INT_MIN;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        for(int j=a;j<=b;j++)
        {
            x=i^j;
            if(x>max)
            {
                max=x;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
