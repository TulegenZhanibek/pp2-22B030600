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
    int max, max2;
    max = a[0][0];
    max2 = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(a[i][j] > max2 && max > a[i][j]){
                max2 = a[i][j];
            }
        }
    }
    cout << max2;
}