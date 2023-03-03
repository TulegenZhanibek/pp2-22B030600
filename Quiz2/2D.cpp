#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r, d;
    cin >> n >> l >> r;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        d = 1;

        if(a[i] >= l && a[i] <= r){
            d += i;
            cout << d << " ";
        }
    }
    
}