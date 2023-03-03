#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    
    int max, maxi = 0, maxj = 0;
    max = a[1][1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){

            if(a[i][j] > max){
                max = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    cout << maxi << " " << maxj;
}