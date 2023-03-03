#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, f, g, h, j;
    cin >> a >> b >> c >> d >> e >> f;
    a *= 3600;
    b *= 60;
    c *= 1;
    d *= 3600;
    e *= 60;
    f *= 1;
    g = d - a;
    h = e - b;
    j = f - c;
    cout << g + h + j;
}