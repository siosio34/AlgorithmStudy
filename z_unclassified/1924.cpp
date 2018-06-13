#include <iostream>
using namespace std;
int main()
{
    int month, day;
    cin >> month >> day;
    for (int i = 1; i < month ; i++) {
        if (i == 1 || i == 3 || i ==  5 || i == 7 || i == 8 || i == 10 | i == 12) {
            day = day + 3;
        }
        else if (i == 2);
        else
            day = day + 2;
    }
    day = day % 7;

    if (day == 0)cout << "SUN" << "\n";
    else if (day == 1)cout << "MON" << "\n";
    else if (day == 2)cout << "TUE" << "\n";
    else if (day == 3)cout << "WED" << "\n";
    else if (day == 4)cout << "THU" << "\n";
    else if (day == 5)cout << "FRI" << "\n";
    else cout << "SAT" << "\n";

    return 1;
}