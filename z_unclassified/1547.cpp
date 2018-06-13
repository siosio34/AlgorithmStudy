#include <iostream>
using namespace std;

int arr[4];
int main() {
	int n;
	cin >> n ;
	
	int a,b;
	
	arr[1] = 1;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> a >> b;	
		int tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp;
	}
	
	for(int i = 1 ; i <=3 ; i++) {
		if(arr[i] > 0) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
	
}