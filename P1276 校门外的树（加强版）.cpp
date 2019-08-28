#include<cstdio>
using namespace std;
int ma[10010][2];
int con,le,rt;
int n,l;
int lef,un_le;
int main()
{
	scanf("%d%d",&l,&n);
	for(register int i=0;i<n;++i)
	{
		scanf("%d%d%d",&con,&le,&rt);
		if(!con)
		{
			for(register int j=le;j<=rt;++j)
			{
				ma[j][0]=1;
				if(ma[j][1])
				{
					un_le++;
					lef--;
				}
			}
		}
		else
		{
			for(register int j=le;j<=rt;++j)
			{
				if(ma[j][0])
				{
					ma[j][0]=0;
					ma[j][1]=1;
					lef++;	
				}
			}
		}
	}
	printf("%d\n%d\n",lef,un_le);
	return 0;
}
