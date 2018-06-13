#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	int tmp;
	int cnt = 0;
	for(int i = 0 ; i < num ; i++) {
	
		cin >> tmp;
		int j;
		for(j = 2 ; j < tmp ; j++) {
			if(tmp % j == 0)
				break;
		}
		
		if(j == tmp)
			cnt++;
	}
	cout << cnt << endl;
}