#include <iostream>
#include <stdio.h>
using namespace std;

// 한번에 한개의 원탑만 옮기기
// 쌓아놓은 원판은 항상 위의것이 아래것보다 작아야됨.
void solve(int number, int x, int y) {
	if(number == 0) {
		return;
	}
	// z 는 6-x-y;
	// n-1 개의원판을 x부터 z까지 옮겨놓은다음에
	solve(number - 1, x, 6 - x - y);
	printf("%d %d\n", x, y);
	// n번째원판을 y로 옮기고
	// 나머지 n-1 개의원판을 z에서 y로 옮겨준다.
	solve(number - 1, 6 - x - y,y);


}
int main() {

	int n;
	cin >> n;
	
	cout << (1 << n) - 1 << endl;
	solve(n, 1, 3);
	return 0;

}