#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> v(3);
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	cout << v[0] << " " << v[1] << " " << v[2] << endl;
	return 0;
}