#include <iostream>
using namespace std;

void solve(int sum) {
	if(sum == 0) {
		cout << "D" << endl;
	} else if(sum == 1) {
		cout << "C"<< endl;
	} else if(sum == 2){
		cout << "B" << endl;
	} else if(sum == 3){
		cout << "A" << endl;
	} else if(sum == 4){
		cout << "E" << endl;
	} 
}
int main() {
	
	int arr[12];
	
	for(int i =0 ; i < 12 ; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0 ; i< 3 ; i++) {
		int sum = 0 ;
		for(int j = 0 ; j < 4 ; j++) {
			sum += arr[4*i + j];
		}
		solve(sum);
	}
	
	// 도 - 3 
	// 개 - 2
	// 걸 - 1
	// 윷 - 4
	// 모 - 0
	
}