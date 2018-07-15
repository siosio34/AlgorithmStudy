#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

int a[200001];
int Answer;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		int n,k;
		cin >> n >> k;
		
		queue<int> v;

		int tmp;
		memset(a,0,sizeof(a));
		
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		qsort(a,n,sizeof(int),compare);
		
		v.push(a[0]);
		for(int i = 1 ; i < n ; i++) {
			if(a[i] - v.front() <= k) {
				v.push(a[i]);
			} else {
				v.pop();
				v.push(a[i]);
			}
		}
		
		cout << "Case #" << test_case+1 << endl;
		cout << v.size() << endl;

	}

	return 0;//Your program should return 0 on normal termination.
}