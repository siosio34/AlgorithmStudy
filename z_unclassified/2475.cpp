#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	int num;
	

	for(int i=0 ; i<5 ; i++)
	{
		cin>>num;
		sum += (num*num);
	}
	cout<< sum%10;
	return 0;
}