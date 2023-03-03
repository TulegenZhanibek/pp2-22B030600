#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0, b = 0, sum1 = 0, sum2 = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++){

        if(a[i] % 2 == 0){
            d += 1;
            sum1 += a[i];
        }

        else if(a[i] % 2 != 0){
            b += 1;
            sum2 += a[i];
        }
    }
    cout << "Left hand magic power: " << sum1 * d << endl;
    cout << "Right hand magic power: " << sum2 * b;
}