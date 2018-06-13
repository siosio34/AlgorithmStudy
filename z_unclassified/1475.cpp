#include <iostream>
#include <string>
using namespace std;

int a[10];
int main() {
	string s;
	cin >> s;
	int max_num = 0;
	
	for(int i = 0 ; i <s.length() ; i++) {
		a[(int)(s[i]-'0')]++;
		int temp = (int)(s[i]-'0');
		if(max_num < a[temp] && temp != 6 && temp != 9) {
			max_num = a[(int)(s[i]-'0')];
		}
	}
	
	int tmp = a[6] + a[9];
	tmp = tmp /2 + tmp %2;
	cout << (tmp <= max_num ? max_num : tmp) << endl;
	
}