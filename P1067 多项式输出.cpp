#include<bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
	int i,n;
	cin>>n;
	for(i=n;i>=0;i--)
	{
		cin>>a[i];
	}
	for(i=n;i>=0;i--)
	{
		if(a[i]!=0&&abs(a[i])!=1)
		{
			if(i==n)
			{
				cout<<a[i]<<"x^"<<i;
			}
			else
			{
				if(i>1)
				{
					if(a[i]<0)
				  	  cout<<a[i]<<"x^"<<i;
					else
				  	  cout<<"+"<<a[i]<<"x^"<<i;
				}
				else if(i==1)
				{
					if(a[i]<0)
				  	  cout<<a[i]<<"x";
					else
				  	  cout<<"+"<<a[i]<<"x";
				}
				else if(i==0)
				{
					if(a[i]<0)
				  	  cout<<a[i];
					else
				  	  cout<<"+"<<a[i];
				}
			}
		}
		else if(abs(a[i])==1)
		{
			if(i==n)
			{
				if(a[i]==1)
				  cout<<"x^"<<i;
				else
				  cout<<"-x^"<<i;
			}
			else
			{
				if(i>1)
				{
					if(a[i]<0)
				  	  cout<<"-"<<"x^"<<i;
					else
				  	  cout<<"+"<<"x^"<<i;
				}
				else if(i==1)
				{
					if(a[i]<0)
				  	  cout<<"-"<<"x";
					else
				  	  cout<<"+"<<"x";
				}
				else if(i==0)
				{
					if(a[i]<0)
				  	  cout<<a[i];
					else
				  	  cout<<"+"<<a[i];
				}
			}
		}
	}
	return 0;
}
