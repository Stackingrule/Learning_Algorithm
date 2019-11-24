#include <iostream>
#include <algorithm>

using namespace std;

static const int MAXN = 200000;

int main(int argc, char const *argv[])
{
	int R[MAXN], n;

	cin >> n;
	for(int i = 0; i < n; i++) cin >> R[i];

	int maxv = -200000;
	int minv = R[0];

	for(int i = 1; i < n; i++) {
		maxv = max(maxv, R[i] - minv);
		minv = min(minv, R[i]);
	}

	cout << maxv << endl;

	return 0;
}