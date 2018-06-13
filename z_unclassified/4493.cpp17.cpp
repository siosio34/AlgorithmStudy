#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	for(int i = 0 ; i < t ; i++) {
		int tmp;
		cin >> tmp;
		
		string a;
		string b;
		int player1Win = 0;
		int player2Win = 0;
		for(int j = 0 ; j < tmp ; j++) {
			cin >> a >> b;
			if(a == "R") {
				if(b == "S"){
					player1Win++;
				} else if(b == "P") {
					player2Win++;
				}
			} else if(a == "S") {
				if(b == "P"){
					player1Win++;
				} else if(b == "R") {
					player2Win++;
				}
			} else {
				if(b == "R"){
					player1Win++;
				} else if(b == "S") {
					player2Win++;
				}
			}
		}
		if(player1Win == player2Win) {
			cout << "TIE" <<endl;
		} else if(player1Win > player2Win) {
			cout << "Player 1" << endl;
		} else {
			cout << "Player 2" << endl;
		}
	}
}