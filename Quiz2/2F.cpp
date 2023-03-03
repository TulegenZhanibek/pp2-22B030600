#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> l >> r;
    for(int i = 0; i < n; i++){

        if(l <= a[i] && r >= a[i]){
            cout << a[i] << " ";
        }
    }
}