#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    string temp;
    for(; getline(cin,temp);)
        cout << temp << endl;
}