#include <iostream>
using namespace std;

struct element {
	int num;
	int x;
	int y;
};

struct container {
	element before;
	element after;
};
int main()
{
	int num;
	element arr[900];
	container arr2[30];
	bool check[2][30];

	for (int i = 0; i < num; i++) {
		check[0][i] = false;
		check[1][i] = false;
	}

	cin >> num;
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++) {
			cin >> arr[i*30+j].num;
			arr[i*30+j].x = i;
			arr[i*30+j].y = j;
		}

	for (int i = 0; i < num*num-1; i++)
			if (arr[i].num < arr[i+1].num) {
				element temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}

	int allRight = 1;
	for (int i = 0; i < num*num; i++) {
		if (check[0][arr[i].x] == false)
			arr2[arr[i].x].before = arr[i];
		else {
		}
	}
}