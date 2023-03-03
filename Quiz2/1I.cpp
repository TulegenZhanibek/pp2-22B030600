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
        max = 0;
        for(int j = 0; j < n; j++){
            
            if(a[i][j] > max){
                max = a[i][j];
            }
        }

        for(int j = 0; j < n; j++){
            a[i][j] = max;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}