#include <bits/stdc++.h>
using namespace std;

int fin(int n){
    cin >> n;
    long long f[n];
    int max = 1, min;
    
    f[0] = max;
    f[1] = max;
    if(n >= 2){

        for(int i = n - 1; i >= n - 2; i--){
            min += f[i];
                     
        }
    }
    return fin(n);    
}

int main(){
    int n;
    cout << fin(n);
}