#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int cnt = 0 ;
    
    for(int i = 0 ; i < s.size() ; i++) {
		int tmp = (int)(s[i]-'A');
		if(tmp < 3 ) {
			cnt += 3;
		} else if(tmp < 6) {
			cnt += 4;
		} else if(tmp < 9) {
			cnt += 5;
		} else if(tmp < 12) {
			cnt += 6;
		} else if(tmp < 15) {
			cnt += 7;
		}else if(tmp < 19) {
			cnt += 8;
		} else if(tmp < 22) {
			cnt += 9;
		} else if(tmp < 26) {
			cnt += 10;
		}
    }
    cout << cnt;
}