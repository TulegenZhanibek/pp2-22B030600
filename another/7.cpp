#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0;
    cin >> n;
    int a[n][n];
    char c = '.';

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(i + j == n - 1){
                d++;
                cout << d;
            }
            else {
                cout << c;
            }
        }
        cout << endl;
    }
}