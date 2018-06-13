#include <iostream>
#include <vector>
using namespace std;

typedef struct Person {
	int tall;
	int weight;
	
	Person(int _tall,int _weight) {
		tall = _tall;
		weight = _weight;
	}
	
	int compareRank(Person b) {
		return weight < b.weight && tall < b.tall;
	}
} Person;

int main() {
	int t;
	cin >> t;
	
	int tall,weight;
	vector<Person> a;
	while(t--) {
		cin >> tall >> weight;
		a.push_back(Person(tall,weight));
	}
		int cnt;
		for(int i = 0 ; i < a.size() ; i++) {
			cnt = 1;
			for(int j = 0 ; j < a.size() ; j++) {
				cnt += a[i].compareRank(a[j]);
			}
			cout << cnt << "\n";
		}
	
}