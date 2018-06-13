#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>
using namespace std;

vector<float> a;

float sum;
float n;
float average;
float cnt;
float tmp;

int main() {

	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		sum = 0;
		cnt = 0;
		a.clear();

		for(int i =0 ; i< n ; i++) {
			cin >> tmp;
			a.push_back(tmp);
			sum += tmp;
		}
		
		average = sum / n;
		for(int i =0 ; i< n ; i++) {
			if(a[i] > average) cnt++;
		}
		float ans = cnt / n * 100.0;
		printf("%.3f", ans);
		cout <<"%" << endl;

	}
}