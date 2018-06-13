#include <iostream>
#include <string>
using namespace std;

int main() {
	int d,m;
	cin >> d >> m ;
	
	string week[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
	
	int monthDay[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	int sum = 0 ;
	for(int i = 0 ; i < m -1 ; i++) {
		sum += monthDay[i];
	}
	sum += d;
	
	cout << week[sum % 7];
}