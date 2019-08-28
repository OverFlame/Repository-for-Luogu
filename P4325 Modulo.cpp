#include<bits/stdc++.h>
using namespace std;
int a[11];
int main()
{
	int x,i,j,sum=0;
	bool flag;
	for(i=0;i<10;i++)
	{
		cin>>x;
		a[i]=x%42;
	}
	for(i=0;i<10;i++)
	{
		flag=true;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			  flag=false;
		}
		if(flag)
		  sum++;
	}
	cout<<sum;
	return 0;
}
