#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int BUTTON_NUM = 10;
const int CLOCK_NUM = 16;
const int MAX_NUM = 987654321;
const int linkedClockWithButton[BUTTON_NUM][CLOCK_NUM] =
{
	{1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1},
	{1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0},
	{1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
	{0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
	{0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1},
	{0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0}	
};

bool isAllClockTwelven(const vector<int>& clocks) {
	for(int i = 0 ; i < clocks.size() ; i++) {
		if(clocks[i] != 12)
			return false;
	}
	return true;
}

void push(vector<int>& clocks, int button) {
	for(int i = 0 ; i < clocks.size() ; i++) {
		if(linkedClockWithButton[button][i] == 1) {
			clocks[i] += 3;
			if(clocks[i] == 15)
				clocks[i] = 3;
		}
	}
}

int solve(vector<int>& clocks, int n) {
	if(n == BUTTON_NUM)
		return isAllClockTwelven(clocks) ? 0 : MAX_NUM;
	
	int ret = MAX_NUM;
	for(int i = 0 ; i < 4 ; i++) {
		ret = min(ret, i + solve(clocks, n+1));
		push(clocks,n);
	}
	return ret;
} 


int main() {
	int t;
	cin >> t;

	while(t--) {
		vector<int> clocks(16,0);
		for(int i = 0 ; i < 16 ; i++) {
			cin >> clocks[i];
		}
		int ret = solve(clocks,0);
		if(ret == MAX_NUM)
			cout << -1 << endl;
		else 
			cout << ret << endl;
	}
}