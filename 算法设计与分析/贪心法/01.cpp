#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct inp
{
	int x, y;
	double c;
	
} node[1005];

int cmp(inp a, inp b)
{
	return a.c > b.c;
}

int main()
{
	int i, n, m;
	double j;
	while(scanf("%d%d", &m, &n), n != -1, m != -1)
	{
		for(i = 0; i < n; i++)
		{
			cin >> node[i].x >> node[i].y;
			node[i].c = node[i].x / (double)node[i].y;
		}
		sort(node, node + n, cmp);
		j = 0;
		for(i = 0; i < n; j++)
		{
			if(node[i].y <= m)
			{
				j += node[i].x;
				m -= node[i].y;
			}
			else
			{
				j += m*node[i].c;
				break;
			}
		}
		printf("%.3lf\n", j);
	}

	return EXIT_SUCCESS;
}