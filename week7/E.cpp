#include <bits/stdc++.h>
using namespace std;

string f(int k, int n){
    if(k == n){
        return "YES";
    }
    if(k > n){
        return "NO";
    }
    return f(k * 2,n);
}

int main(){
    int n; cin >> n;
    int k = 1;
    cout << f(k,n);
}