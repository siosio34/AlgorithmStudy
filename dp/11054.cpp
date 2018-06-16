#include <iostream>
using namespace std;

int a[1001];
int dp_left[1001];
int dp_right[1001];

int main() {
    int num;
    cin >> num;
    
    for(int k =1 ; k<= num ; k++) {
        cin >> a[k];
        dp_left[k] = 1;
        dp_right[k] = 1;
    }
    
    for(int i=1; i<= num ; i++) {
        for(int j=1 ; j<i ; j++) {
            if(a[j] < a[i] && dp_left[i] <= dp_left[j])
                dp_left[i] = dp_left[j] + 1;
        }
    }
    
    for(int i=num; i >= 1 ; i--) {
        for(int j=num ; j > i ; j--) {
            if(a[j] < a[i] && dp_right[i] <= dp_right[j])
                dp_right[i] = dp_right[j] + 1;
        }
    }
    
    int max = 0;
    for(int i=1 ; i<=num ; i++) {
        if(max < dp_left[i] + dp_right[i]) {
            max = dp_left[i] + dp_right[i];
        }
    }
    
    cout << max - 1 << endl;
}