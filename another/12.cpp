#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    
    int sum, dim = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            sum += a[i][j];
        }
        dim = sum;
        sum = 0;
        cout << dim << endl;
    }
}