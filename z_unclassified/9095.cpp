#include <iostream>
using namespace std;

int d[11];

void go(int _num) {

	if (d[_num] == 0)
		d[_num] = d[_num - 1] + d[_num - 2] + d[_num - 3];


}

int main() {

	int num;
	cin >> num;
	int temp;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for (int i = 0; i < num; i++) {

		cin >> temp;
		for (int j = 4; j <= temp; j++)
			go(j);
		cout << d[temp] << endl;
	}

}