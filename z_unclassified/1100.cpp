#include <iostream>
using namespace std;

int main()
{
	char arr[8][8];
	int num=0;

	for(int i=0 ; i<8 ; i++)
	{
		for(int j=0 ; j<8 ; j++)
		{
			cin>>arr[i][j];
		}
	}


	for(int i=0 ; i<8 ; i++)
	{
		for(int j=0; j<8 ; j++)
		{
			if((i+j)%2==0 && arr[i][j]=='F')
				num++;
		}
	}

	cout<<num<<endl;
}



