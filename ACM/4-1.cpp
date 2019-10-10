/*
* https://zoj.pintia.cn  第2812题
 */
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	ifstream cin("4-1.txt");
	char ch;
	int i = 1;
	int sum = 0;

	while(cin.get(ch)) {
		if(ch == '#') break;
		if(ch != '\n') {
			if(ch != ' ') sum = sum + i*(ch - 64);
			i++;
		}
		if(ch == '\n') {
			cout << sum << endl;
			sum = 0;
			i = 1;
		}
	} 
	return 0;
}