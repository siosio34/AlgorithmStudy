// #include <iostream>
// using namespace std;

// int w[17][17];
// int dp[17][17];

// int num;
// int min_distance;
// bool save[17] = { false };
// int cnt = 1;
// int sum = 0;
// int start;

// void dfs(int visit) {
	
// 	if(cnt == num) {
// 		if(w[visit][start] > 0) {
// 			if(min_distance > sum + w[visit][start]) {
// 				min_distance =  sum + w[visit][start];
// 			}
// 		}
		
// 		return ;
// 	}
	
// 	for(int i = 0 ; i< num ; i++) {
// 		if(!save[i] && w[visit][i] > 0) {
// 			sum += w[visit][i];
// 			cnt++;
// 			save[i] = true;
			
// 			dfs(i);
			
// 			sum -= w[visit][i];
// 			cnt--;
// 			save[i] = false;
// 		}
// 	}
		
// }

// int main() {
	
// 	min_distance = 987654321 ;
// 	cin >> num;
	
// 	for(int i = 0 ; i < num ; i++) {
// 		for(int j = 0 ; j <num ; j++) {
// 			cin >> w[i][j];
// 		}
// 	}
	

// 	for(int i = 0 ; i < num ; i++) {
// 		start = i;
// 		save[i] = true;
// 		dfs(i);
// 	}
	
// 	cout << min_distance << endl;
// }