#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    int a,b;
    int cnt = 1;
    while(t--) {
        cin >> a >> b;
        cout << "Case #" << cnt << ": " << a << " + " << b <<" = "<< a+b << endl;
        cnt++;
    }
}