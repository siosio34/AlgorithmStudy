#include <iostream>
#include <vector>
using namespace std;

vector<int> arr[1001];
vector<int> d[1001];

int maxInt(int a, int b, int c) {
	int max = 0;

	if (a >= b && a >= c)
		max = a;
	else if (b >= c && b >= a)
		max = b;
	else
		max = c;

	return max;

}

int main() {

	int col, row;
	int temp;

	cin >> col >> row;

	d[0].resize(row+1);

	for (int i = 1; i <= col; i++) {
		
		arr[i].push_back(0);
		d[i].resize(row+1);
		for (int j = 1; j <= row; j++) {
			cin >> temp;
			arr[i].push_back(temp);
		}
	}

	//d[1][1] = arr[1][1];
	
	for (int i = 1; i <= col; i++) {
		for (int j = 1; j <= row; j++) {
			d[i][j] = maxInt(d[i - 1][j], d[i][j - 1], d[i - 1][j - 1]) + arr[i][j];
		}
	}

	cout << d[col][row];


}