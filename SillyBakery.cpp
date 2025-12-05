//*https://programming.in.th/tasks/1012
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , sum = 0 ,value[5] = {8 , 6 , 4 , 2, 1} , tempcake;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> tempcake;
            sum += tempcake * value[j];
        }
    }
    cout << (sum + 7) / 8;
}