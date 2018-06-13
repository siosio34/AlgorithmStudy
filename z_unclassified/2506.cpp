#include <iostream>
using namespace std;

int main()
{
	int question_num;
	int a[100];
	int total=0;
	int b=0;

	cin>>question_num;
	for(int i=0 ; i<question_num ; i++)
	{
		cin>>a[i];
	}

	for(int i =0 ;i<question_num ; i++)
	{
		if(a[i]==1 )
		{
			b++;
			total+=b;
		}
		else if(a[i]==0)
		{
			b=0;
		}
		
	}
	cout<<total;

	return 0;

}
