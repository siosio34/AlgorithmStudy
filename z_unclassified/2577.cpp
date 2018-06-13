#include <iostream>
using namespace std;

int arr[11];

int main() {
	long long int ans;
	long long int a,b,c;
	
	cin >> a >> b >> c;
	ans = a * b * c;
	
	while(ans > 0) {
		arr[ans % 10]++;
		ans /= 10;
	}
	
	for(int i =0 ; i < 10 ; i++) {
		cout << arr[i] << endl;
	}
}