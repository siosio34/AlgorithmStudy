// #include <iostream>
// #include <algorithm>
// using namespace std;


// int num;
// int sticker_num;


// int main() {

// 	cin >> num;
	
// 	for(int i = 0 ; i < num ; i++) {
		
// 		int d[2][100001];
// 		int arr_num[2][100001];
		
// 		cin >> sticker_num;
		
// 		for(int j = 0 ; j < 2; j++) {
// 			for(int k = 1 ; k <= sticker_num ; k++) {
// 				cin >> arr_num[j][k];
// 			}
// 		}
		
// 		d[0][0] = d[1][0] = 0;
// 		d[0][1] = arr_num[0][1];
// 		d[1][1] = arr_num[1][1];
		
// 		for(int i=2 ; i <= sticker_num ; i++) {
// 			d[0][i] = max(d[1][i-1], d[1][i-2]) + arr_num[0][i];
// 			d[1][i] = max(d[0][i-1], d[0][i-2]) + arr_num[1][i];
// 		}
		
// 		cout << max(d[0][sticker_num],d[1][sticker_num]) << endl;
		
// 	}
	
// }