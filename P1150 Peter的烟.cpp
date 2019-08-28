#include<bits/stdc++.h>
using namespace std;
int n,k,sum=0;
int main()
{
	scanf("%d%d",&n,&k);
	printf("%d\n",n+(n-1)/(k-1));
	return 0;
}
