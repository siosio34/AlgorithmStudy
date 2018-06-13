#include <iostream>
using namespace std;

int main()
{
	int num;
	int k=0;
	int check=0;
	cin>>num;
	for(int i=0 ; i<num ; i++)
	{
		check=k;
		for(check ; check<num ; check++ )
		{
			cout<<"*";
		}
		k++;
		cout<<endl;
	}
}