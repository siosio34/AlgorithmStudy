#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

struct Person {
	int age;
	string name;
	int registerDate;
};

bool sortUser(Person a, Person b) {
	if (a.age < b.age)
		return true;
	else if (a.age == b.age)
	{
		if (a.registerDate < b.registerDate) {
			return true;
		}
		else {
			return false;
		}
	}
	else
		return false;
}

int main() {
	int num;
	cin >> num;

	vector<Person> person(num);

	for (int i = 0; i < num; i++) {
		cin >> person[i].age >> person[i].name;
		person[i].registerDate = i;
	}	

	sort(person.begin(), person.end(), sortUser);

	for (int i = 0; i < num; i++) {
		cout << person[i].age << " " << person[i].name << endl;
	}

	return 0;
}