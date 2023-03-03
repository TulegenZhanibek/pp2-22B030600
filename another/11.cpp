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

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){

            if((i + j) % 2 == 1){
                a[i][j] -= 1;
            }  
            else if((i + j) % 2 == 0){
                a[i][j] += 1;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}