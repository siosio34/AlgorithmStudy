#include <iostream>
using namespace std;

int scoreA[10];
int scoreB[10];
int a;
int b;
int main() {
	
	for(int i = 0 ; i < 10 ; i++) {
		cin >> scoreA[i];
	}
	
	for(int i = 0 ; i < 10 ; i++) {
		cin >> scoreB[i];
		if(scoreA[i] < scoreB[i]) {
			b++;
		} else if(scoreA[i] > scoreB[i]) {
			a++;
		}
	}
	
	if(a > b) {
		cout << "A";
	} else if(a < b) {
		cout << "B";
	} else {
		cout << "D";
	}
	
	
}