#include <iostream>
#include <queue>
using namespace std;

int main() {

	int N, M;
	cin >> N >> M;
	
	
	queue<int> queueNum;
	for (int i = 1; i <= N; i++) {
		queueNum.push(i);
	}

	int k = 0;

	cout << "<";
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < M - 1; j++) {
			queueNum.push(queueNum.front());
			queueNum.pop();
		}
		
		cout << queueNum.front();
		if (i != N) {
			cout << ", ";
		}
		queueNum.pop();
		
	}
	cout << ">";
	system("pause");
	return 0;
}