#include <bits/stdc++.h>
using namespace std;

int main(){
    long n, l, r, sum = 0, b;
    cin >> n >> l >> r;
    long arr[n];

    for (int i = 1; i <= n; i++){
    cin >> arr[i];
    }
     
    for (int i = l; i <= r; i++){
        sum += arr[i];
    }  

    cout << sum;
    return 0;
}