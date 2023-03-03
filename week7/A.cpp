#include <bits/stdc++.h>
using namespace std;

int f(int n, int d){
    d = pow(2, n);
    return d;
}

int main(){
    int n, d;
    cin >> n;
    cout << f(n, d);
}