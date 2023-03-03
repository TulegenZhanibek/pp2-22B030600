#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n, d, c;
    cin >> a >> b >> n;
    d = (b * n) % 100;
    c = (b * n) / 100;
    cout << (a * n) + c << " " << d;
}