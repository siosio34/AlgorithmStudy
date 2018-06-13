#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <string.h>
using namespace std;

vector<string> _conclude;

int compare_number(string _temp)
{
	if (_temp == "zero") return 0;
	else if (_temp == "one") return 1;
	else if (_temp == "two") return 2;
	else if (_temp == "three") return 3;
	else if (_temp == "four") return 4;
	else if (_temp == "five") return 5;
	else if (_temp == "six") return 6;
	else if (_temp == "seven") return 7;
	else if (_temp == "eight") return 8;
	else if (_temp == "nine") return 9;
	else if (_temp == "ten") return 10;
}

string convert_str(int cal_num)
{
	if (cal_num == 0) return "zero";
	else if (cal_num == 1) return "one";
	else if (cal_num == 2) return "two";
	else if (cal_num == 3) return "three";
	else if (cal_num == 4) return "four";
	else if (cal_num == 5) return "five";
	else if (cal_num == 6) return "six";
	else if (cal_num == 7) return "seven";
	else if (cal_num == 8) return "eight";
	else if (cal_num == 9) return "nine";
	else if (cal_num == 10) return "ten";
}


void _sort(string &_rststr)
{
	string store_str;
	for (int i = 0; i < _rststr.size() ; i++)
	{
		for (int j = 0; j < _rststr.size()-1; j++)
		{
			if (_rststr[j] > _rststr[j + 1])
			{
				store_str = _rststr[j];
				_rststr[j] = _rststr[j+1];
				_rststr[j + 1] = *(store_str.c_str());
			}
		}
	}
}

void _caculate(int num1, int num2, string _temp,string _input_string)
{
	int result;
	string result_str;
	bool check = false;
	int size = 0;
	if (_temp == "+") result = num1 + num2;
	else if (_temp == "-") result = num1 - num2;
	else if (_temp == "*") result = num1 * num2;

	if (result < 0 || result > 10)
	{
		_conclude.push_back("No");
		return;
	}

	else
	{
		result_str = convert_str(result);
	}

	_sort(_input_string);
	_sort(result_str);
	
	if (result_str.size() == _input_string.size())
	{
		for (int i = 0; i < result_str.size(); i++)
		{
			if (_input_string[i] == result_str[i])
				check = true;

			else
			{
				check = false;
				break;
			}
		}

		if(check) _conclude.push_back("Yes");
		else _conclude.push_back("No");
	}
	else
		_conclude.push_back("No");
}


int main()
{
	int num;
	int temp_num;

	vector<string> num_str;

	string temp;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> temp;
			num_str.push_back(temp);
		}
	}

	for (int i = 0; i < num; i++)
	{
		int num1, num2;
		string _operate;
		num1 = compare_number(num_str[5 * i]);
		_operate = (num_str[(5 * i) + 1]);
		num2 = compare_number(num_str[(5 * i) + 2]);
		_caculate(num1, num2, _operate,num_str[(5*i)+4]);
	}

	for (int i = 0; i < _conclude.size(); i++)
	{
		cout << _conclude[i] << " ";
	}



}

