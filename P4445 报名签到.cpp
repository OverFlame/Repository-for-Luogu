#include<bits/stdc++.h>
using namespace std;
long long a[100010];
int main()
{
	long long n,i,s=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(i)
		  s+=max(a[i-1],a[i]);
	}
	cout<<s;
	return 0;
}
