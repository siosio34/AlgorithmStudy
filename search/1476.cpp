#include <iostream>
using namespace std;

int main() {
	int e,s,m;
	cin >> e >> s >> m;
	
	int earth = 1;
	int sun = 1;
	int moon = 1;
	
	int year = 1;

	while(1) {
		if(earth == e && sun == s && m == moon)
			break;
		
		earth = earth + 1 == 16 ? 1 : earth + 1;
		sun = sun + 1 == 29 ? 1 : sun + 1;
		moon = moon + 1 == 20 ? 1 : moon + 1;
		
		year++;
	}
	
	cout << year;
}