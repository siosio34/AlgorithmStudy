#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> a;
	
	int cnt = 0;
	int plusNum = 1;
	while(cnt <= 1000) {
		
		for(int i = 0 ; i < plusNum ; i++) {
			a.push_back(plusNum);
		}
		cnt += plusNum;
		++plusNum;
	}
	
	int start,end;
	cin >> start >> end;
	int sum = 0 ;
	for(int i = start-1 ; i <= end-1 ; i++) {
		sum += a[i];
	}
	cout << sum;
	
	
	
}