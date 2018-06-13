#include <iostream>
using namespace std;

int main()
{
	int N;
	int place;
	cin >> N >> place;

	int** arr = new int*[N];
	for (int i = 0; i<N; i++)
		arr[i] = new int[N];

	int x = N / 2;
	int y = N / 2;
	int count = 1;
	int count2 = 0;
	int count3 = 0;
	int placeX;
	int placeY;

	arr[x][y] = 1;
	while (count < N*N) {
		for (int j = 0; j<(count3 + 2) / 2; j++) {
			count++;
			switch (count2 % 4) {
			case 0:
				y--;
				break;
			case 1:
				x++;
				break;
			case 2:
				y++;
				break;
			case 3:
				x--;
				break;
			}
			arr[x][y] = count;
			if (count == place) {
				placeX = y;
				placeY = x;
			}
		}
		count3++;
		count2++;
	}

	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N; j++)
			cout << arr[j][i] << " ";
		cout << endl;
	}
	cout << placeX + 1 << " " << placeY + 1 << endl;
	return 0;
}