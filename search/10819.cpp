#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[9];

int main() {
	int n;
	cin >> n;
	
	int tmp;
	for(int i = 0 ; i < n ; i++) {
		cin >> tmp;
		arr[i] = tmp;
	}
	
	sort(arr, arr +n);
	int maxValue = 0;
	do {
		
		int calc = 0;
		for(int i = 1 ; i < n ; i++) {
			calc += abs(arr[i-1] - arr[i]);
		}

		
		if(maxValue < calc) {
			maxValue = calc;
		}
		
	} while(next_permutation(arr, arr+n));
	
	cout << maxValue;
}