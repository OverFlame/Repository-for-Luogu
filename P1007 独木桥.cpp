#include<cstdio>
#include<iostream>
using namespace std;
int map[5001];
int n,l,x,ans1,ans2;
int main()
{
	scanf("%d%d",&l,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		map[x]++;
	}
	for(int i=l/2;i>0;i--)
	{
		if(map[i])
		{
			ans1=i;
			break;
		}
	}
	for(int i=l/2;i<=l;i++)
	{
		if(map[i])
		{
			ans2=l+1-i;
			break;
		}
	}
	printf("%d ",max(ans1,ans2));
	for(int i=l;i>l/2;i--)
	{
		if(map[i])
		{
			ans1=i;
			break;
		}
	}
	for(int i=1;i<=l/2;i++)
	{
		if(map[i])
		{
			ans2=l+1-i;
			break;
		}
	}
	printf("%d",max(ans1,ans2));	
	return 0;
}
