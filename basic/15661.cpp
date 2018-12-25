#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <algorithm>
using namespace std;

int score[21][21];

vector<int> startTeam;
vector<int> linkTeam;

int main() {
	int n;
	cin >> n;
	
	int sum = 0;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> score[i][j];
		}
	}
	
	int bit = (1 << n) - 1;
	int minScore = 987654321;

	for(int subset = bit; subset ; subset = ((subset-1) & bit)){
		

		for(int i = 0 ; i < n ; i++) {
			if(subset & (1 << i)) { // 포함되어 있니
				startTeam.push_back(i);
			} else { 
				linkTeam.push_back(i);
			}
		}
		
		int startTeamScore = 0;
		int linkTeamScore = 0;
		
		for(int i = 0 ; i < startTeam.size() ; i++) {
			for(int j = i + 1 ; j < startTeam.size() ; j++) {
				startTeamScore += (score[startTeam[i]][startTeam[j]] + score[startTeam[j]][startTeam[i]]);
			}
		}
		
		for(int i = 0 ; i < linkTeam.size() ; i++) {
			for(int j = i + 1 ; j < linkTeam.size() ; j++) {
				linkTeamScore += (score[linkTeam[i]][linkTeam[j]] + score[linkTeam[j]][linkTeam[i]]);
			}
		}


			startTeam.clear();
			linkTeam.clear();
			
			minScore = min(minScore, abs(startTeamScore - linkTeamScore));
			

		}
	cout << minScore << endl;
	}
	

	
	// 공집합은 방문하지 않는다.


	
	
	
	
