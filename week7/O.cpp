#include <bits/stdc++.h>
using namespace std;

int f(int n, int m, string k){
    int d;
    if(n == 0){
        cout << k;
    }
    if(n > 0){
        d = n % m;
        if(d >= 10){
            k = char(65 + d - 10) + k;
        }
        if(d < 10){
            k = char(48 + d) + k;
        }
        f(n / m, m, k);
    }
}

int main(){
    int n, m;
    string k;
    cin >> n >> m;
    f(n, m, k);
    return 0;
}