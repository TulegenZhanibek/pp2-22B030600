#include <bits/stdc++.h>
using namespace std;

void f(int a, int b, int c, double d){
    cin >> a >> b;
    c = pow(a, 2) + pow(b, 2);
    d = sqrt(c);
    cout << setprecision(4);
    cout << d;
}

int main(){
    int a, b, c, d;
    f(a, b, c, d);
}