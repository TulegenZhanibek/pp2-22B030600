#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, d = 0;
    cin >> n;
    int a[n];
    int b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int j = 0; j < n; j++){
        cin >> b[j];
    }
    cin >> t;
    
    for(int i = 0, j = 0; i < n, j < n; i++, j++){
        
        if(a[i] <= t && t <= b[j]){
            d += 1; 
        }
    }
    cout << d;
}