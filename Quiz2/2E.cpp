#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int q = 0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 1; i < n; i++) {
        if(i == n - 1) {
            break;
        }
        else {
        if(a[i] > a[i-1] && a[i]>a[i+1]) {
            q += 1;
        }
        }
    }
    cout << q;
}