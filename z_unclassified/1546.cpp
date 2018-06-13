#include <iostream>
using namespace std;

float n;
float sum; 
float maxNum;
float arr[1001];

int main() {
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		if(arr[i] > maxNum)
			maxNum = arr[i];
	}
	
	for(int i = 0 ; i < n ; i++) {
		sum += (arr[i] / maxNum) * 100;
	}
	
	cout << sum / (float) n << endl;
	

}