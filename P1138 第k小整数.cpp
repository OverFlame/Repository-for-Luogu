#include<bits/stdc++.h>
using namespace std;
int a[10010],tag[30000],front=0;
int n;
int main()
{
	int x,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(!tag[x])
		{
			tag[x]=1;
			a[front++]=x;
			continue;
		}
	}
	if(k>front)
	{
		cout<<"NO RESULT"<<endl;
		return 0;
	}
	sort(a,a+front);
	cout<<a[k-1]<<endl;
	return 0;
}
