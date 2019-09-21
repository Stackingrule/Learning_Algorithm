#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(3);
	v[0] = 3;
	v[1] = 5;
	v[2] = 7;

	//定义迭代器变量
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}	