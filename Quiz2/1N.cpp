#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        
        while(a[i] != 0 && a[n - 1] != 0){
            a[i] %= 10;
            a[n - 1 - i] %= 10;
            sum1 += a[i];
            sum2 += a[n - 1 - i];
        }
    }
    cout << sum1 << " " << sum2;
}