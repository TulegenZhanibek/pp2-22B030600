#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, maxi = 0, maxj = 0;
    cin >> n >> m >> x;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            if(a[i][j] == x){
                maxi = i;
                maxj = j;
            }
            cout << maxi;
        }
        cout << endl;
    }
    return 0;
}