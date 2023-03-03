#include <bits/stdc++.h>
using namespace std;

int min(int n){
    n = 4;
    int a[n];
    
    int min = a[0];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){

        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout << min(n);
}