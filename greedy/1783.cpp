#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int width, height;
	
	cin >> height >> width;
	
	int ans;
	
	if(height == 1) {
		ans = 1;
	} else if(height == 2) {
		ans = min(4, (width + 1) / 2);
	} else{
		if(width < 7) {
			ans = min(4, width);
		} else if(width >= 7) {
			ans = width - 2;
		}
	}
	cout << ans;
}