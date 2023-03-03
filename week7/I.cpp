#include <bits/stdc++.h>
using namespace std;

void f(long long n, long long d){
    
    while(cin >> n && n != 0){
            d += n;
    }
    cout << d;
}

int main(){
    long long n, d;
    f(n, d);
}