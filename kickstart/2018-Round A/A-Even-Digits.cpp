#include <iostream>

using namespace std;

int getAns(int N) {
	for(int i = 0; i++) {
		if(check(N-i) || check(N+i)) {
			return i;
		}
	}
}