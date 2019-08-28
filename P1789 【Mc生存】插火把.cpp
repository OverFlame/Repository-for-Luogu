#include<bits/stdc++.h>
using namespace std;

int map_[110][110];
int n,m,k,j,x,y,ans=0;

int main(){
    cin>>n>>m>>k;
    
    for(register int i=1;i<=m;i++){
    	cin>>x>>y;
    	map_[x+2][y]=map_[x][y+2]=map_[x-2][y]=map_[x][y-2]=map_[x+1][y]=map_[x+1][y+1]=map_[x+1][y-1]=map_[x][y+1]=map_[x][y]=map_[x][y-1]=map_[x-1][y]=map_[x-1][y+1]=map_[x-1][y-1]=1;
    }
    
    for(register int i=1;i<=k;i++){
		cin>>x>>y;
		map_[x-2][y-2]=map_[x-2][y-1]=map_[x-2][y]=map_[x-2][y+1]=map_[x-2][y+2]=map_[x-1][y-2]=map_[x-1][y-1]=map_[x-1][y]=map_[x-1][y+1]=map_[x-1][y+2]=map_[x][y-2]=map_[x][y-1]=map_[x][y]=map_[x][y+1]=map_[x][y+2]=map_[x+1][y-2]=map_[x+1][y-1]=map_[x+1][y]=map_[x+1][y+1]=map_[x+1][y+2]=map_[x+2][y-2]=map_[x+2][y-1]=map_[x+2][y]=map_[x+2][y+1]=map_[x+2][y+2]=1;
    }
	
	for(register int i=1;i<=n;i++)
	{
        for(register int j=1;j<=n;j++)
		{
            if(map_[i][j]==0)ans++;
        }
    }
    
    cout<<ans;
    return 0;
}
