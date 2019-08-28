#include<iostream>
#include<iomanip>
using namespace std;
#define r register 
int map[22][22],con[4]={1,0,0,1};
unsigned long long dpmap[22][22];
int n,m,x,y;
unsigned long long sum;
inline void dp(int i,int j)
{
	if(!map[i-1][j])
		dpmap[i][j]+=dpmap[i-1][j];
	if(!map[i][j-1])
		dpmap[i][j]+=dpmap[i][j-1];
	return;
}
int main()
{
	freopen("testdata.in","r",stdin);
	cin>>n>>m>>x>>y;
	map[x][y]=map[x-1][y-2]=map[x-1][y+2]=map[x+1][y-2]=map[x+1][y+2]=map[x-2][y-1]=map[x-2][y+1]=map[x+2][y-1]=map[x+2][y+1]=1;
	for(r int i=0;i<=max(n,m);++i)
		dpmap[i][0]=dpmap[0][i]=1;
	for(r int i=1;i<=n;++i)
	{
		for(r int j=1;j<=m;++j)
			dp(i,j);
	}
	cout<<dpmap[n][m]<<endl;
	for(r int i=0;i<=n;++i)
	{
		for(r int j=0;j<=m;++j)
		{
			cout<<setw(12)<<dpmap[i][j];
		}
		cout<<endl;	
	}
	for(r int i=0;i<=n;++i)
	{
		for(r int j=0;j<=m;++j)
		{
			cout<<setw(2)<<map[i][j];
		}
		cout<<endl;	
	}	
	return 0;
}
