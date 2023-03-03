#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, m, s;
    cin >> a;
    b = 9 * 60;
    int ban = b + a * 45 + (a / 2) * 5 + ((a - 1) / 2) * 15;
    cout << (ban / 60) % 60 << " " << ban % 60;
}