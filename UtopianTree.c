#include<stdio.h>
int main()
{
	int n,m,i,j,height=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)	
	{
		scanf("%d",&m);
		height=1;
		for(j=1;j<=m;j++)
		{
			if((j%2)==0)
			{
				height=height+1;
			}
			else
			{
				height=height*2;
			}
		}
		printf("%d\n",height);
	}
	return 0;
}
