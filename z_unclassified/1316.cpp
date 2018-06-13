#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<string> word;
	string temp;
	
	int cnt = 0 ;
	while(n--) {
		cin >> temp;
		int arr[26];
		bool check = true;
		for(int i =0 ; i < 26 ; i++) {
			arr[i] = 0;
		}
		
		arr[(int)temp[0]-97]++;
		
		if(temp.size() == 1) {
			cnt++;
		}
		else {
			for(int i = 1 ; i < temp.size() ; i++) {
				
				if(arr[(int)temp[i] - 97] == 0) {
					arr[(int)temp[i] - 97]++;
				} else {
					if(temp[i] != temp[i-1]) {
						check = false;
						break;
					}
				}
			}
			if(check) cnt++;
		}

	}
	cout << cnt << endl;
}
	
