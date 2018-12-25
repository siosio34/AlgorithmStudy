#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool check = false;

void dfs(string start, string end) {
	
	if(start.size() > end.size()) {
		return ;
	}
	
	if(start == end) {
		check = true;
		return ;
	}
	
	dfs(start + 'A', end);
	reverse(start.begin(), start.end());
	dfs(start + 'B', end);

}

void noDfsSolve(string start, string end) {
	
	while(1) {
		if(start.size() == end.size()) {
			if(start.compare(end) == 0)
				check = true;
			break;
		}
		
		char top = end[end.size() - 1];
		end.erase(end.size() - 1);
		if(top == 'B')
			reverse(end.begin(), end.end());
	}
}

int main() {
	
	string start, end;
	cin >> start >> end;
	
	noDfsSolve(start, end);
	
	cout << (check ? 1 : 0) << endl;
		
}