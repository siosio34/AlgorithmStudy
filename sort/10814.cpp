#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct Person {
	int age;
	string name;
};

int main() {
	int n;
	cin >> n;
	
	vector<Person> a(n);
	for(int i =0 ; i < n ; i++) {
		cin >> a[i].age >> a[i].name;
	}
	stable_sort(a.begin(),a.end(),[](Person u, Person v){
		return u.age < v.age;
	});
	for(auto p : a) {
		cout << p.age << ' ' << p.name << "\n";
	}
}