#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long double a,b;
	cin>>a>>b;
	cout.precision(30);
	cout<< fixed <<a/b ;
	return 0;
}