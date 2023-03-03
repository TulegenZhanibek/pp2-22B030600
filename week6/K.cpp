#include <bits/stdc++.h>
using namespace std;

void f(int n, int d){
    cin >> n;
    d = 0;

    while(n != 0){
        d += n % 10;
        n /= 10;
    }
    cout << d;
}

int main(){
    int n, d;
    f(n, d);
}