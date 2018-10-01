#include <iostream>
#include <string>
using namespace std;

bool alpabet[27];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int r, c;

string stringArr[21];

int ans;

void solve(int x, int y, int cnt) {

	if(cnt > ans) {
		ans = cnt;
	}

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
			if (alpabet[stringArr[nx][ny] - 'A'] == false) {
 				alpabet[stringArr[nx][ny] - 'A'] = true;
				solve(nx, ny, cnt + 1);
				alpabet[stringArr[nx][ny] - 'A'] = false;
			}
		}
	}
	

}

int main() {
	
	cin >> r >> c;
	
	string tmp;
	for(int i = 0 ; i < r ; i++) {
		cin >> tmp;
		stringArr[i] = tmp;
	}
	
	alpabet[stringArr[0][0] - 'A'] = true;
	solve(0,0,1);
	
	cout << ans << endl;
	
	
}