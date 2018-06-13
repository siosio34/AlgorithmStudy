#include <iostream>
using namespace std;

int arr[15][15];

int main() {
    int t;
    cin >> t;
    
    int tmp;
	
	for(int i = 1 ; i <= 15 ; i++) {
		arr[0][i] = i;
	}

	 for(int i =1 ; i <= 14  ; i++) {
        for(int j = 1 ; j<= 14 ; j++) {
			for(int k = 1 ; k<= j ; k++) {
				arr[i][j] += arr[i-1][k];
			}
        }
    }
	
    while(t--) {

        int a,b;
        cin >> a >> b;
		cout << arr[a][b] << endl;
 
    }
}