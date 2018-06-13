#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
	int arr[26];
	int tmpArr[26];
	

int main() {
	string s;
	cin >> s;
	
	for(int i = 0; i < s.length() ; i++) {
		int tmp = (int)s[i];
		if(tmp >= 65 && tmp <= 90) {
			// 대문자
			arr[tmp-65]++;
			tmpArr[tmp-65]++;
		} else {
			arr[tmp-97]++;
			tmpArr[tmp-97]++;
			// 소문자
		}
	}

	sort(arr, arr+26);
	// for(int i = 0 ; i < 26 ; i++) {
	// 	cout << arr[i] << " ";
	// }
	if(arr[25] == arr[24]) {
		cout << "?" << endl;
	} else {
		for(int i = 0 ; i < 26 ; i++) {
			if(arr[25] == tmpArr[i]) {
				cout << (char)(i + 65) << endl;
				break;
			}
		}
	}
	
}