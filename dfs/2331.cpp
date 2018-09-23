#include <iostream>
using namespace std;

int checked[1000000];

int pow(int x, int p) {
	int ans =1;
	for(int i = 0 ; i < p; i++) {
		ans = ans*x;
	}
	return ans;
}

int next(int a, int p) {
	int ans = 0 ;
	while(a > 0) {
		ans += pow(a%10, p);
		a /= 10;
	}
	return ans;
}

int length(int a, int p, int cnt) {
	if(checked[a] != 0) {
		return checked[a] - 1;
	}
	checked[a] = cnt;
	int b = next(a,p);
	return length(b, p ,cnt +1);
}

int main() {
	int a,p;
	cin >> a >> p;
	cout << length(a,p,1);
}