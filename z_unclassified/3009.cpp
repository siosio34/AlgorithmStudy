#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e,f;
	cin >> a >> b >> c >> d >> e >> f;
	
	int g,i;
	if(a == c) {
		g = e;
		if(f == b) {
			i = d;
		} else {
			i = b;
		}
	} else if (a == e) {
		g = c;
		if(d == b){
			i = f;
		} else {
			i = b;
		}
	} else {
		g = a;
		if(b == d) {
			i = f;
		} else {
			i = d;
		}
	}
	cout << g << " " << i ;
}