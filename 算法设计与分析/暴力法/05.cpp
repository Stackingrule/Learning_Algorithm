#include <cstdio>
#include <string>

using namespace std;

inline int Count(string s, string t) {
	int num = 0;
	int i = 0, j = 0;
	while(i < s.length() && j < t.length()) {
		if(s[i] == t[j]) {
			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
		if(j == t.length()) {
			num++;
			j = 0;
		}
	}

}
int main() {

}