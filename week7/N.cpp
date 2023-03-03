#include <bits/stdc++.h>
using namespace std;

void f(int n, int k){
    cin >> n >> k;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n >= k + 2){
        cout << "cheater";
    }
    
    else {
        cout << "no";
    }
}

int main(){
    int n, k;
    f(n, k);
}