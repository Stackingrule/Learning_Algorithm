#include <cstdio>
using namespace std;

int main()
{
	int i, m, sum;

	for( m = 2; m <= 1000; m++) {
		sum = 0;
		for(i = 1; i <= m/2; i++) {
			if(m%i == 0)
				sum += i;
		}

		if(sum == m)
			printf("%d\n", m);
	}

	return 0;
}