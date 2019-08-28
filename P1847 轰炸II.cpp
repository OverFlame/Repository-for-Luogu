#include<bits/stdc++.h>
using namespace std;

#define Maxn 2010

struct T
{
    int llx,lly;
    int rrx,rry;
}ju[Maxn];
int n,m;

int main()
{
    scanf("%d%d",&n,&m);
    for (register int i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&ju[i].llx,&ju[i].lly,&ju[i].rrx,&ju[i].rry);
    }
    for (register int i=1;i<=m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int ans=0,pos;
        for (register int j=1;j<=n;j++)
        {
            if (x>=ju[j].llx && x<=ju[j].rrx && y>=ju[j].lly && y<=ju[j].rry)
            {
                ans++;
                pos=j;
            }
        }
        if (ans==0)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            printf("YES %d %d\n",ans,pos);
        }
    }
}
