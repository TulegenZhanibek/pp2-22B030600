#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    int z = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            if(i + j == n - 1){
                z += a[i][j];
            }
        }
    }
    cout << z;
}