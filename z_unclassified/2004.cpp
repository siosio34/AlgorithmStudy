#include <iostream>
#include <algorithm>
using namespace std;

int divFive(int a) {
	int sum = 0;
	while(a){
		sum += a/5;
		a/=5;
	}
	return sum;
}

int divTwo(int a) {
	int sum = 0;
	while(a){
		sum += a/2;
		a/=2;
	}
	return sum;
}

int main() {
	long long int n,m;
	cin >> n >> m;
	int one = divFive(n) - divFive(n-m) - divFive(m);
	int two = divTwo(n) -divTwo(n-m) - divTwo(m);
			   
	cout << (one < two ? one : two);
}