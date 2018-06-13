#include <iostream>
#include <vector>
#include <string>
using namespace std;

int arr[21][21];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int ans;
int r, c;

void go(vector<string> &board, vector<bool> &check, int x, int y,
	int cnt) {
	
	if (cnt > ans)
		ans = cnt;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
			if (check[board[nx][ny]- 'A'] == false) {
 				check[board[nx][ny] - 'A'] = true;
				go(board, check, nx, ny, cnt + 1);
				check[board[nx][ny] - 'A'] = false;
			}
		}
	}

}


int main() {

	
	cin >> r >> c;
	ans = 0;

	vector<string> a;
	string temp;

	vector<bool> check(r*c);

	for (int i = 0; i < r; i++) {
		cin >> temp;
		a.push_back(temp);
	}

	check[a[0][0] - 'A'] = true;
	go(a, check, 0, 0, 0);
	
	cout << ans + 1 << endl;
	
	return 0;
}