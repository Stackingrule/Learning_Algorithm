#include <cstdio>
#include <algorithm>

using namespace std;

const static int MAX = 101;

//�����ʾ
int x[] = {2, 4, 1, 6, -2, 5, 3};
int n = 7, k = 3;

int y[MAX];
int m;

void solve() 
{
	sort(x, x + n);

	int tmp = x[0];
	m = 0;
	y[m] = x[0];
	for(int i = 0; i < n; i++)
	{
		if(x[i] - tmp > k) 
		{
			tmp = x[i];
			m++;
			y[m] = x[i];
		}
	}
	m++;

}

int main()
{
	solve();
	printf("�������\n");
	printf(" ѡȡ�ĸ�������Ϊ%d��\n", m);
	printf(" ѡȡ�ĸ�������: \n");
	for(int i = 0; i < m; i++)
	{
		printf("[%d, %d] ", y[i], y[i + k]);
	}
	printf("\n");
	return 0;
}