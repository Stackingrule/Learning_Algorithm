#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	ifstream cin("aaa.txt");

	int a, b;
	cin >> a;
	while(cin >> a >> b) {
		if(a < b) cout << "NO BRAINS" << endl;
		else
			cout << "MMM BRAINS" << endl;
	}
	return 0;
}