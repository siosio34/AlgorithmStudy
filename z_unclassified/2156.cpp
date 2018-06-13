#include <iostream>
#include <algorithm>
using namespace std;

int d[10001];
int p[10001];

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> p[i];
	}
	
	d[1] = p[1];
	d[2] = p[1] + p[2];

	for (int i = 3; i <= num; i++) {
		d[i] = max(max(d[i-1],d[i - 2] + p[i]), d[i - 3] + p[i - 1] + p[i]);
	}

	cout << d[num];

}