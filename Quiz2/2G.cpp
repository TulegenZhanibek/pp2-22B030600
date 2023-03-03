#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    int a[n];
    int b[n];

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){

        if(i = n - 1){
            break;
        }
        b[n] = a[i];
        a[i] = a[i + 1];
        a[i + 1] = b[n];
    }
    cout << temp;
}