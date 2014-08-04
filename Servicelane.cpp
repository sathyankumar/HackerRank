#include<iostream>
#include<climits>
using namespace std;
int width[100000];
int main()
{
    int w,t,i=0;
    cin>>w>>t;
    while(i<w)
    {
        cin>>width[i];
        i++;
    }
    
    while(t--)
    {
    int start,end,min=INT_MAX;
    cin>>start>>end;
    for(int j=start;j<=end;j++)
    {
        if(width[j]<min)
        {
            min=width[j];    
        }
       
    }
    
    cout<<min<<endl;
    }
    return 0;
}
