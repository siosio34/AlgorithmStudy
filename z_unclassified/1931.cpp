#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Meeting {
	int beginTime, endTime;
};

bool cmp(const Meeting &time1, const Meeting &time2) {
	if (time1.endTime == time2.endTime) {
		return time1.beginTime <time2.beginTime;
	}
	else {
		return time1.endTime < time2.endTime;
	}
}
int main() {

	int num; 
	cin >> num;

	vector<Meeting> a(num);
	for (int i = 0; i < num; i++) {
		cin >> a[i].beginTime;
		cin >> a[i].endTime;
	}
	sort(a.begin(), a.end(), cmp);

	int now = 0;
	int ans = 0;
	for (int i = 0; i < a.size(); i++) {
		if (now <= a[i].beginTime) {
			now = a[i].endTime;
			ans += 1;
		}
	}

	cout << ans << endl;

}