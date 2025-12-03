//*https://programming.in.th/tasks/1005
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    vector<vector<int>> dp(n , vector<int>(n , 0));
    int pos[2] , maxse = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(i == j){
                dp[i][j] = num[i];
            }
            else{
                dp[i][j] = num[j] + dp[i][j-1];
            }
            if(maxse < dp[i][j]){
                maxse = dp[i][j];
                pos[0] = i;
                pos[1] = j;
            }
        }
    }
    if(maxse == 0){
        cout << "Empty sequence";
        return 0;
    }
    for(int i = pos[0] ; i <= pos[1]; i++){
        cout << num[i] << " ";
    }
    cout << endl << maxse;
}