#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, max, maxi = 0, maxj = 0;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    max = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(i == j){
                
                if(a[i][j] > max){
                    max = a[i][j];
                    maxi = i;
                    maxj = j;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << maxi + 1 <<";" << maxj + 1;
}