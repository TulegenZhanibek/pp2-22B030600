#include <bits/stdc++.h>
using namespace std;

void f(int n, int l){
    
    l = 0;
    if(n > l){
        l++;
    }
    cout << l << " ";
    f(n, l);
}

int main(){
    int n, l;
    cin >> n;
    f(n, l);
}