#include<bits/stdc++.h>
using namespace std;
float a,b,c,x;
void work();
int main()
{
	scanf("%f%f%f",&a,&b,&c);
	work();
	return 0;
}
void work()
{
	x=a*0.2+b*0.3+c*0.5;
	if(x<=100)
	  printf("%0.0f",x);
	else
	  printf("%d",100);
	return;
}
