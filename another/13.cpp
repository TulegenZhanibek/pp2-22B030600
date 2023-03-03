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
    int max = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int c = 0; c < n; c++){
                for(int k = 0; k < n; k++){

                    if(a[i][j] > max){
                        max = a[i][j];
                        a[c][k] = max;
                    }
                }
            }
        }
    }
    
    for(int c = 0; c < n; c++){
        for(int k = 0; k < n; k++){
            cout << a[c][k] << " ";
        }
        cout << endl;
    }
}