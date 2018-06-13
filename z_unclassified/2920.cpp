#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[8];
	string tmp = "";
	int before = 0;
	for(int i = 0 ; i < 8 ; i++) {
		cin >> arr[i];
	}
	
	if(arr[0] < arr[1]) {
		tmp = "ascending";
	} else {
		tmp = "descending";
	}
	
	before = arr[1];
	
	for(int i = 2; i < 8 ; i++) {
		if(before < arr[i]) {
			if(tmp == "descending") {
				tmp = "mixed";
				break;
			} 
		} else if(before > arr[i]) {
			if(tmp == "ascending") {
				tmp = "mixed";
				break;
			}
		}
		before = arr[i];
	}
	cout << tmp << endl;
}