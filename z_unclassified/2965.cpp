#include <iostream>
using namespace std;

int main() {
	int first,second,third;
	
	cin >> first >> second >> third;
	int tmp = second - first > third - second ? second - first - 1 : third - second-1;
	cout << tmp << endl;
	
}