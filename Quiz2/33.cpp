#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0, c = 0;
    cin >> n; 
    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            if(i > j){
                d = a[i][j];
                cout << d << " ";
            }
        }
        v++;
        d = f[v];
    }
    
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(i < j){
                c = a[i][j];
                cout << c << " ";
            }
        }
    } 
}