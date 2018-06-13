#include <iostream>
#include <string>
using namespace std;

int main() {
	string a[8] = {"c=","c-","dz","d-", "lj","nj","s=","z="};
	
	string arr;
	cin >> arr;
	
	int len = arr.length();
	int cnt = 0 ;
	int i;
	for(i = 0; i < len; i++)        
	{
		if(arr[i] == 'c' && (arr[i+1] == '=' || arr[i+1] == '-'))
			cnt++;
		
		if(arr[i] == 'd' && (arr[i+1] == '-' || (arr[i+1] == 'z' && arr[i+2] == '=')))
			cnt++;
		
		if(arr[i] == 'j' && (arr[i-1] == 'l' || arr[i-1] == 'n'))
			cnt++;
		
		if(arr[i] == '=' && (arr[i-1] == 's' || arr[i-1] == 'z'))
			cnt++;
	}
	cout << len - cnt;
	
}