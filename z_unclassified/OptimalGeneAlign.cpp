#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string temp1, temp2;
int penalty;

#define NOEQUAL 1 // 같지않을때
#define TM 2 // 틈

int check_min(int a, int b, int c) { // 3개의 숫자를 비교하는 함수
	if (a < b && a < c) {
		return a;
	}
	else if (b<c && b < a) {
		return b;
	}
	else {
		return c;
	}
}

int run1(int i, int j) {
	if (i == temp1.size()) { // 더이상 temp1 배열에 틈을 채울 수 없을때
		penalty = TM * (temp2.size() - j); // 패널티에 채워야 될만큼의 틈만큼을 더함
		return penalty;
	}
	else if (j == temp2.size()) { // 더이상 temp2 배열에 틈을 채울 수 없을때
		penalty = TM * (temp1.size() - i); // 패널티에 채워야 될만큼의 틈만큼을 더함
		return penalty;
	}

	else {
		if (temp1[i] != temp2[j]) penalty += NOEQUAL; // 배치되있는 두글자가 일치되어 있지 않을때
	}

	penalty = check_min(run1(i + 1, j + 1) + penalty, // 틈을 안만드는경우
						run1(i + 1, j) + TM,  // 처음으로 입력한 스트링에 틈을 만드는 경우
						run1(i, j + 1) + TM); // 두번째로 입력한 스트링에 틈을 만드는 경우
	return penalty;

}

int main()
{
	cin >> temp1 >> temp2;
	penalty = 0;
	cout << endl <<"최적의 패널티 : "<< run1(0, 0) << endl;
}