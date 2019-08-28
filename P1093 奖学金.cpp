#include<bits/stdc++.h>
using namespace std;
struct stu{
    int num;
    int c,m,e; 
    int sum;
}student[310];
int n;
inline bool cmp(stu a,stu b)
{
    if(a.sum>b.sum)
		return 1;
    else if(a.sum<b.sum)
		return 0;
    else
    {
        if(a.c>b.c)
			return 1;
        else if(a.c<b.c)
			return 0;
        else
        {
            if(a.num>b.num)
				return 0;
            else
				return 1;
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        student[i].num=i;
        scanf("%d%d%d",&student[i].c,&student[i].m,&student[i].e);
		student[i].sum=student[i].c+student[i].m+student[i].e;
    }
    sort(student+1,student+1+n,cmp);
    for(int i=1;i<=5;i++)
    	printf("%d %d\n",student[i].num,student[i].sum);
    return 0;
}
