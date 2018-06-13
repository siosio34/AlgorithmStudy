#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int check[1001];
int main() {
	int tmp;
	int sum = 0 ;
	
	vector<pair<int,int> > a;
	for(int i = 0 ; i < 10 ; i++) {
		cin >> tmp;
		sum += tmp;
		check[tmp]++;
	}
	
	int maxInt = 0;
	int maxNum = 0;
	for(int i = 10 ; i < 1000 ; i+= 10) {
		if(check[i] > maxInt) {
			maxInt = check[i];
			maxNum = i;
		}
	}
	

	cout << sum / 10 << endl;
	cout << maxNum;
	
	
	
}