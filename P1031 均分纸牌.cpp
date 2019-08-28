#include<iostream>
using namespace std;
int q[0x3f3f3f];
int main()
{ 
	int a,p=0,js=0;
	cin>>a;  
	for(int y=0;y<a;y++)
	{
		cin>>q[y];
		p+=q[y];
	}
	p/=a;  
	for(int y=0;y<a;y++)
		q[y]-=p;  
	for(int y=0;y<a;y++)
	{
		if(q[y]==0)
		  continue;
		q[y+1]+=q[y];
		js++;
	}  
	cout<<js;  
	return 0;
}
