#include <bits/stdc++.h>
using namespace std;

int f(int n, int e, int c){
    int d = n % 10;

    if(n > 0){
        
        if(d == n % 10){
            f(n / 10, e + 1, c);
        }
        else {
            f(n / 10, e, c + 1);
        }
    }
}

int main(){
    int n, e, c; cin >> n;
    cout << f(n, e, c);

    if(c > e){
        cout << c;
    }
    else {
        cout << e;
    }
}