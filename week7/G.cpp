#include <bits/stdc++.h>
using namespace std;

int f(int n,int l){
    if (n == 0){
        return l;
    }
    l = l * n;
    return f(--n,l);
}

int main(){
    int n; cin >> n;
    int l = 1;
    cout << f(n,l);
}