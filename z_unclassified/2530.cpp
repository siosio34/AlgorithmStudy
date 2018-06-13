#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;

	int sum = a * 60 * 60 + b * 60 + c + d;
	cout << sum / 60 / 60 % 24 <<" " << sum / 60 % 60 << " " << sum % 60;
}