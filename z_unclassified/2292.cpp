#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    
    long long int cnt = 1;
    long long int plusNum = 6;
    long long int currentNum = 1;
    
    while(n > currentNum) {
        currentNum += plusNum;
        plusNum+=6;
        cnt++;
    }
    
    cout << cnt << endl;    
}