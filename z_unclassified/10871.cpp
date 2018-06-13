#include <iostream>
#include <vector>
using namespace std;

int n,x;
vector<int> a;

int main() {
	cin >> n >> x;
	int tmp;
	for(int i = 0 ; i < n ; i++) {
		cin >> tmp;
		if(tmp < x) {
			cout << tmp << " ";
		}
	}
}