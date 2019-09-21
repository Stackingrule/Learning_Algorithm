#include <vector>
#include <iostream>
using namespace std;
int main() {
	vector<int> v;
	v.push_back(2);
	v.push_back(7);
	v.push_back(9);
	cout << v[0] << " " << v[1] << " " << v[2] << endl;
	return 0;
}