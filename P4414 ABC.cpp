#include<bits/stdc++.h>
using namespace std;

int a[4];
int x,y,z;
char c[4];

int main()
{
	cin >> a[0] >> a[1] >> a[2];
	cin >> c[0] >> c[1] >> c[2];
	
	for(register int i = 0;i < 2;++ i)
	{
		for(register int j = 0;j < 2 - i;++ j)
			if(a[j] > a[j + 1])
			  swap(a[j],a[j + 1]);
	}
	
	for(register int i = 0;i < 3;++ i)
	{
		if(c[i] == 'A')
		  cout << a[0] << " ";
		else if(c[i] == 'B')
		  cout << a[1] << " ";
		else
		  cout << a[2] << " ";
	}
	return 0;
}
