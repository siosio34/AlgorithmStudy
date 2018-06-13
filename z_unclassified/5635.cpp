#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
	string name;
	int day;
	int month;
	int year;
};

bool comp(const Person& d1, const Person& d2) {
	
	// All cases when true should be returned
    if (d1.year < d2.year)
        return true;
    if (d1.year == d2.year && d1.month < d2.month)
        return true;
    if (d1.year == d2.year && d1.month == d2.month &&
                              d1.day < d2.day)
        return true;
 
    // If none of the above cases satisfy, return false
    return false;
}

int main() {
	int t;
	cin >> t;
	
	string s;
	int day,month,year;
	vector<Person> a;
	for(int i = 0 ; i < t ; i++) {
		cin >> s >> day >> month >> year;
		Person person;
		person.name = s;
		person.day = day;
		person.month = month;
		person.year = year;
		a.push_back(person);
	}
	sort(a.begin(), a.end(),comp);
	cout << a[t-1].name << endl;
	cout << a[0].name;

}