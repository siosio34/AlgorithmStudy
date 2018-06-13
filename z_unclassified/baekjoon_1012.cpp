// #include <iostream>
// using namespace std;

// bool arr[51][51];
// int col, row;
// void checkIsBatu(int x, int y);

// int main() {
//     int num;
//     cin >> num;
//     for(int i =0 ; i < num ; i++) {
    
//         int batuNum;
//         int solution = 0;
//         cin >> col >> row >> batuNum;
        
//         int x,y;
//         for(int l = 0 ; l < batuNum ; l++) {
//             cin >> x >> y;
//             arr[x][y] = true;
//         }
        
//         for(int j = 0 ; j < col ; j++) {
//             for(int k = 0 ; k < row ; k++) {
//                 if(arr[j][k] == true) {
//                     solution++;
//                     checkIsBatu(j,k);
//                 }
//             }
//         }
//         cout << solution << endl;
        
//     }
// }
// void checkIsBatu(int x, int y) {
//     if(x < 0 || x >= col || y >= row || y < 0)
//         return ;
    
//     if(arr[x][y] == false)
//         return ;
	
// 	arr[x][y] = false;
    
//     if(arr[x+1][y])
//     	checkIsBatu(x+1, y);
            
// 	if(arr[x][y+1])
//     	checkIsBatu(x,y+1);
		
// 	if(arr[x-1][y])
//     	checkIsBatu(x-1, y);
		
// 	if(arr[x][y-1])
//     	checkIsBatu(x, y-1);
	  
// }