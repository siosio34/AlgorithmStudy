#include <iostream>
using namespace std;

int main() {

	int M, N;
	cin >> M >> N;

	int pn = 0;
	bool c[1000001] = { false };
	
	for (int i = 2; i <= N; i++) {
		if (c[i] == false) {
			if(i >= M)
				cout << i << endl;
			for (int j = i*2; j <= N; j += i) {
				c[j] = true;
			}
		}
	}

	return 0;
}