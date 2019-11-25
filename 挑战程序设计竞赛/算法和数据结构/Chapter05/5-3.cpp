#include <cstdio>

int A[1000000], n;

int binarySearch(int key) {
	int lo = 0;
	int hi = n;
	int mid;
	while(lo < hi) {
		mid = (lo + hi) / 2;
		if(key == A[mid]) return 1;
		if(key > A[mid]) lo = mid + 1;
		else if(key < A[mid]) hi = mid;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int i, q, k, sum = 0;

	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	scanf("%d", &q);
	for( i = 0; i < q; i++) {
		scanf("%d", &k);
		if(binarySearch(k)) sum++;
	}

	printf("%d\n", sum);

	return 0;
	return 0;
}