#include<bits/stdc++.h>
using namespace std;

int sum=0,lo=0,unlo=0;
int n;

int main()
{
	int x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x)
		{
			if(unlo)
			{
				if(lo>=pow(2,unlo-1))
					lo-=pow(2,unlo-1);
				else
					lo=0;
			}	
			lo++;
			unlo=0;
			if(lo>=365)
				sum+=6;
			else if(lo>=120)
				sum+=5;
			else if(lo>=30)
				sum+=4;
			else if(lo>=7)
				sum+=3;
			else if(lo>=3)
				sum+=2;
			else
				sum++;
		}
		else
		{
			unlo++;
		}
//		cout<<i+1<<" "<<sum<<" "<<lo<<" "<<unlo<<endl;
	}
	cout<<sum<<endl;
	return 0;
}
