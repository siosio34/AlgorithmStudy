#include <iostream>
using namespace std;

int main()
{
	int num;
	int k=0;
	int check=0;
	int a=0;
	cin>>num;
	for(int i=0 ; i<num ; i++)
	{
		check=k;
		for(int l=0 ; l<a ; l++)
		{
			cout<<" ";
		}
		for(check ; check<num ; check++ )
		{
			cout<<"*";
		}
		k++;
		a++;
		cout<<endl;
	}
}