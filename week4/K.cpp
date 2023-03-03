#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, sum1 = 0, z = 0, b = 0, sum2 = 0;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        sum1 += a[i][j];
        }
        b = sum1;
        cout << "The    x    sum of row number " << i + 1 << " " << "is " << b << endl;
        sum1 = 0;
    }

    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            sum2 += a[i][j];
        }
        z = sum2;
        cout << "The sum of column number " << j + 1 << " " << "is " << z << endl;
        sum2 = 0;
    }
}