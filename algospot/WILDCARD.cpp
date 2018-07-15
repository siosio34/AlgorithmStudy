#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

vector<string> v;
int dp[51][51];

bool isMatch(const string &w, const string &s) {
	int pos = 0;
	while(pos < s.size() && pos < w.size() && (w[pos] == '?' || w[pos] == s[pos])) {
		++pos;
	}
	
	if(pos == w.size() && pos == s.size())
		return true;
	
	if(w[pos] == '*') {
		for(int skip = 0 ; pos+skip <= s.size() ; ++skip){
			if(isMatch(w.substr(pos+1), s.substr(pos+skip)))
				return true;
		}
	}
	return false;
}

int isMatchMemorized(const string &wildStr, const string &fileName,int w,int s) {
	int &ret = dp[w][s];
	if(ret != -1)
		return ret;
	
	if(w < wildStr.size() && s < fileName.size() && (wildStr[w] == '?' || wildStr[w] == fileName[s])) {
		return ret = isMatchMemorized(wildStr,fileName,w+1,s+1);
	}
	

	if(w == wildStr.size())
		return ret = (s == fileName.size());
	
	if(wildStr[w] == '*') {
		for(int skip = 0 ; skip + s <= fileName.size() ; skip++) {
			if(isMatchMemorized(wildStr,fileName,w+1,s+skip)) {
				return ret = 1;
			}
		}
	}
	return ret = 0;
}

int main() {
	int t;
	cin >> t;

	int n;
	
	string w;
	string s;

	while(t--) {
		cin >> w;
		cin >> n;
		v.clear();
		while(n--) {
			memset(dp,-1,sizeof(dp));
			cin >> s;
			if(isMatchMemorized(w,s,0,0) == 1) {
				v.push_back(s);
			}
		}
		sort(v.begin(), v.end());
		for(int i = 0 ; i < v.size(); i++) {
			cout << v[i] << endl;
		}
		
	}
	
}