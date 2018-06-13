#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <iostream>
#include <cstdio>
using namespace std;

template<typename Out>
void split(const std::string &s, char delim, Out result) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        *(result++) = item;
    }
}

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}

int main() {
	string a;
	string b;
	cin >> a >> b;
	
	vector<string> x = split(a,':');
	vector<string> y = split(b,':');
	
	int xSum = 0;
	int ySum = 0;
	xSum = stoi(x[0]) * 3600 + stoi(x[1]) * 60 + stoi(x[2]);
	ySum = stoi(y[0]) * 3600 + stoi(y[1]) * 60 + stoi(y[2]) + 3600*24;
	
	int sum = (ySum - xSum)%(3600 * 24);
	printf("%02d:%02d:%02d\n",sum/3600,sum / 60 % 60, sum % 60);
}
