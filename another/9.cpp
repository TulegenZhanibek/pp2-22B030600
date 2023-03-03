#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int sum[n];
    int min;
    min = 0;
    for(int i = 0; i < n; i++){
        sum[i] = 0;
        for(int j = 0; j < m; j++){
            sum[i] += a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){

        if(sum[i] < sum[min]){
            min = i;
        }
    }
    cout << min + 1;
}