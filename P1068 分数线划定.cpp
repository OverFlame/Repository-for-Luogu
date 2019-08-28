#include<bits/stdc++.h>
using namespace std;
struct volunteer{
	int id,score;
}a[5010];
int comp(volunteer x,volunteer y)
{
	if(x.score==y.score)
	  return x.id<y.id;
    return x.score>y.score;
}
int main()
{
	int n,m,i,line,sum=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i].id>>a[i].score;
	}
	sort(a,a+n,comp);
	m=floor(m*1.5);
	line=a[m-1].score;
	for(i=0;a[i].score>=line;i++)
	{
          sum++;
    }
    cout<<line<<" "<<sum<<endl;
    for(i=0;i<sum;i++)
    {
    	cout<<a[i].id<<" "<<a[i].score<<endl;
    }
    return 0;
}
