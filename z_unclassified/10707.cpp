#include <iostream>
using namespace std;

int main() {
	int x,y,c,d,p;
	cin >> x >> y >> c >> d >> p;
	
	int ans;
	int xMoney = p*x;
	int yMoney = p <= c ? y : y + ((p - c) * d);
	ans = xMoney > yMoney ? yMoney :xMoney;
	cout << ans;
}