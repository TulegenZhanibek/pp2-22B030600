#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, min, max, maxi = 0, mini = 0;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int sum[n];
    for(int i = 0; i < n; i++){
        sum[i] = 0;
        for(int j = 0; j < m; j++){
            sum[i] += a[i][j];
        }
    }   

    int min_row = 0;
    for(int i = 1; i < n; i++){
        if(sum[i] < sum[min_row]){
            min_row = i;
        }
    }

    cout << min_row + 1;

    return 0;
}