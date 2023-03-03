#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, minj = 0, mini = 0, b;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int min;
    cout << "coordinates of min elements:" << endl;
    for(int j = 0; j < m; j++){
        min = 1000000;
        for(int i = 0; i < n; i++){

            if(a[i][j] < min){
                min = a[i][j];
                mini = i;
                minj = j;
            }
        }
        b += min;
        cout << mini + 1 << ";" << minj + 1 << endl;
    }
    cout << endl;
    cout << "Their sum:" << endl;
    cout << b;
}