#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, z = 0;
    cin >> n;
    int a[n];
    int b[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
        
            if(a[i] == a[j]){
                z++;
            }
        }
        b[a[i]] = z;
    }
    for(int c = 0; c < z; z++){
        cout << b[c];
    }
}