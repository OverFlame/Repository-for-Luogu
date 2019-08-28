#include<bits/stdc++.h>
#define inf 2147483647
#define maxn 10005
#define maxm 500005
using namespace std;
int n,m,s,num_edge=0;
int dis[maxn],vis[maxn],head[maxm];
struct Edge
{
  	int next,to,dis;
}edge[maxm];
void addedge(int from,int to,int dis)
{
  	edge[++num_edge].next=head[from];
  	edge[num_edge].to=to;
  	edge[num_edge].dis=dis;
  	head[from]=num_edge;
}
void spfa()
{
  	queue<int> q;
  	for(int i=1; i<=n; i++) 
	{
		dis[i]=inf;
	  	vis[i]=0;
	}
  	q.push(s);
	dis[s]=0;
	vis[s]=1;
  	while(!q.empty())
	{
	  	int u=q.front();
	  	q.pop(); vis[u]=0;
	  	for(int i=head[u]; i; i=edge[i].next)
		{
		  	int v=edge[i].to; 
		  	if(dis[v]>dis[u]+edge[i].dis)
			{
			  	dis[v]=dis[u]+edge[i].dis;
			  	if(vis[v]==0)
				{
				  	vis[v]=1;
				  	q.push(v);
				}
			}
		}
	}
}
int main()
{
  	cin>>n>>m>>s;
  	for(int i=1; i<=m; i++)
	{
	  int f,g,w;
	  cin>>f>>g>>w; 
	  addedge(f,g,w);
	}
  	spfa(); 
  	for(int i=1; i<=n; i++)
	  	if(s==i)
	  	  cout<<0<<" ";
		else
		  cout<<dis[i]<<" ";
  	return 0;
}
