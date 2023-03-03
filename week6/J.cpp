#include <bits/stdc++.h>
using namespace std;

void f(int n){
    int a[n];
    n = 4;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int max = *max_element(a, a + n);
    cout << max;
}

int main(){
    int n;
    f(n);
}