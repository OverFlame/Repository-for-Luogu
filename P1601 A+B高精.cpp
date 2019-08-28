#include<bits/stdc++.h>
using namespace std;
int ans[501],x[500],y[500];
string a,b;
int max(int s1,int s2)
{
	if(s1>s2)
    	return s1;
	else
	    return s2;
}
int main()
{
	int jw=0,sum;
	bool is0=true;
	cin>>a>>b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<a.size();i++)
	    x[i]=(int)a[i]-48;
	for(int i=0;i<b.size();i++)
	    y[i]=(int)b[i]-48;
    for(sum=0;sum<max(a.size(),b.size());sum++)
    {
        ans[sum]+=x[sum]+y[sum]+jw;
        if(ans[sum]>=10)
        {
            ans[sum+1]+=1;
            ans[sum]-=10;
        }

    }
    for(int i=max(a.size(),b.size());i>=0;i--)
    {
        if(is0&&ans[i]==0)
            continue;
        is0=false;
        cout<<ans[i];
    }
    if(is0)
        cout<<0;
	return 0;
}
