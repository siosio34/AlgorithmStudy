#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a;

int main() {
	int tmp;
	for(int i =0 ;i <3 ; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	cout << a[1];
}