#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b;
	cin >> c;
	int sum = a * 60 + b + c;
	cout << sum / 60 % 24 << " " << sum % 60;
}