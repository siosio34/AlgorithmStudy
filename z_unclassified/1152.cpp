#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;


int main() {
	char s[1000001];
	gets(s);
	int cnt = 0;
	
	char *word = strtok(s, " ");
	while(word != NULL) {
		cnt++;
		word = strtok(NULL, " ");
	}
	cout << cnt << endl;
	
}