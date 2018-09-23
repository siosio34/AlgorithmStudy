#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int select;
	cin >> select;
	
	vector<int> permutation;
	for(int i = 1 ; i <= n; i++) {
		permutation.push_back(i);
	}
	
	long long factorialNum[21];
	factorialNum[0] = 1;
	for(int i = 1 ; i < 21 ; i++) {
		factorialNum[i] = factorialNum[i-1] * i;
	}
	 
	
	if(select == 1) {
		long long order;
		cin >> order;

		int index = 0;
		while(permutation.size() > 0) {
			if(order > factorialNum[permutation.size()-1]){
				index++;
				order -= factorialNum[permutation.size()-1];
			} else {
				printf("%d ",permutation[index]);
				permutation.erase(permutation.begin() + index);
				index = 0;
			}
		}
		
	} else if(select == 2) {
		vector<int> newPermutation;
		int tmp;
		for(int i = 0 ; i < n; i++) {
			cin >> tmp;
			newPermutation.push_back(tmp);
		}

		int index = 0;
		long long order = 0;
		while(permutation.size() > 1) {
			
			int cnt = 0;
			int eraseIndex = 0;
			for(int i = 0 ; i < permutation.size() ; i++) {
				if(newPermutation[index] > permutation[i]) {
					cnt++;
				} else if(newPermutation[index] == permutation[i]) {
					eraseIndex = i;
				} else {
					continue;
				}
			}
			
			order += cnt * factorialNum[permutation.size()-1];
			index += 1;
			permutation.erase(permutation.begin() + eraseIndex);
		}

		cout << order + 1;
		
	}
}