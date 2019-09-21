#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v(3);
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;

	v.insert(v.begin(), 8);
	v.insert(v.begin()+2, 5);
	v.insert(v.end(), 9);

	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}