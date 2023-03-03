#include <bits/stdc++.h>
using namespace std;

int main(){
    int w, h, sum = 0;
    cin >> w >> h;
    int n, m = 4;
    cin >> n;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

        for(int j = 0; j < m; j++){
            sum += a[0][j];
        }
    cout << (w * h) - sum;
}