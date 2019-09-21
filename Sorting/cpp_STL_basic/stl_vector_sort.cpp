#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int i;

	for(i = 10; i > 0; i--) {
		v.push_back(i);
	}

	for(i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	sort(v.begin(), v.end());

	for(i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}