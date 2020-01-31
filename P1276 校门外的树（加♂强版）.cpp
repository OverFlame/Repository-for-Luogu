#include<bits/stdc++.h>
using namespace std;
int line[10010][2];

int sum_left=0,sum_killed=0;
int L,N,x,y,zeta;

void _kill(int x,int y)
{
	int con_=x;
	while(con_<=y)
	{
		if(line[con_][1])
			sum_killed++;
		line[con_][0]=line[con_][1]=0;
		con_++;
	}
	return;
}

void _grow(int x,int y)
{
	int con_=x;
	while(con_<=y)
	{
		if(!line[con_][0])
		{
			line[con_][1]=1;
			line[con_][0]=1;
		}
		con_++;
	}
	return;
}

void _count()
{
	for(int i=0;i<=L;i++)
	{
		if(line[i][1])
			sum_left++;
	}
	return;
}

int main()
{
	cin>>L>>N;
	for(int i=0;i<=L;i++)
	{
		line[i][0]=1;
	}
	for(int i=0;i<N;i++)
	{
		cin>>zeta>>x>>y;
		if(!zeta)
			_kill(x,y);
		else
			_grow(x,y);
	}
	_count();
	cout<<sum_left<<endl<<sum_killed<<endl;
	return 0;
}
