#include <iostream>
using namespace std;
int c[5];
int main() {
    int n;
    int a,b;
	cin >> n;
    for(int i=0 ; i < n ; i++) {
    
        cin >> a >> b;
        if(a == 0 || b == 0) {
            c[4]++;
        }
        if(a > 0 && b > 0) {
            c[0]++;
        } else if(a < 0 && b > 0) {
            c[1]++;
        } else if(a < 0 && b < 0) {
            c[2]++;
        } else if(a > 0 && b < 0) {
            c[3]++;
        }
    }
    for(int i = 0 ; i < 4 ; i++ ) {
        cout <<"Q" << i+1 << ": " <<c[i] << endl;
    }
    cout << "AXIS: " << c[4];
}