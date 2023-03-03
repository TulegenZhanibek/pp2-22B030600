#include <bits/stdc++.h>
using namespace std;

void f(){
    int a, b, c, d, x = 0;
    cin >> a >> b >> c >> d;
    while((a * x) - b != (c * x) + d){
        x++;
    }
    cout << x;
}

int main(){
    f();
}