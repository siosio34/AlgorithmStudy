#include <iostream>
using namespace std;

int main()
{
	int input;
	int temp;
	int first, last;
	int answer = 0;

	cin >> input;

	int temp2 = input;
	do
	{
		first = temp2 / 10;
		last = temp2 % 10;
		temp = first + last;
		temp2 = last * 10 + temp % 10;
		answer += 1;
	} while (temp2 != input);

	cout << answer;
	return 0;
}