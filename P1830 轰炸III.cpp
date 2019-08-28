#include<iostream>
#include<cstdio>
using namespace std;

struct Node {
	int x, y, xx, yy;
}node[1000010];
int map[110][110];
int n, m, x, y, ax, ay;
int ans, last;
bool flag = false;

int main()
{
	cin >> n >> m >> x >> y;
	for (register int i = 0; i < x; ++i)
	{
		cin >> node[i].x >> node[i].y >> node[i].xx >> node[i].yy;
	}
	for (register int i = 0; i < y; ++i)
	{
		ans = last = flag = 0;
		cin >> ax >> ay;
		for (register int j = 0; j < x; ++j)
		{
			if (node[j].x <= ax && node[j].y <= ay && node[j].xx >= ax && node[j].yy >= ay)
			{
				flag = true;
				ans++;
				last = j + 1;
			}
		}
		if (flag)
			printf("Y %d %d\n", ans, last);
		else
			printf("N\n");
	}
	return 0;
}
