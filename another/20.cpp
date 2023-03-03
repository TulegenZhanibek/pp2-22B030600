#include <bits/stdc++.h>
using namespace std;

void f(long long n, long long d, long long g){
    g = 0;
    cin >> n;
    d = 2;

    while(n > d){
        d++;

        if(n % d == 0){
            g++;
        }
    }
    cout << (g > 1 ? "composite" : "prime");
}

int main(){
    long long n, d, g;
    f(n, d, g);
}