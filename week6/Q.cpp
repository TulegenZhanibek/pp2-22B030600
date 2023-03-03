#include <bits/stdc++.h>
using namespace std;

float f(float n, float m){
    float d;
    d = m / n;
    return d;
}

int main(){
    float n, m;
    cin >> n >> m;
    cout << f(n, m) * 100;
}