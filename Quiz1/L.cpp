#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, m, s;
    cin >> n;
    h = (n / 3600) % 24;
    m = (n / 60) % 60;
    s = n % 60;
    cout << h / 10 << h % 10 << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10;
}