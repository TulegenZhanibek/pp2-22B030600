#include <bits/stdc++.h>
using namespace std;

void f(int n){
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = n - 1; i >= 0; i--){
        cout << a[i] << " ";
    }
}

int main(){
    int n;
    f(n);
}