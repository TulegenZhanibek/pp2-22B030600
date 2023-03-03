#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum1 = 0, sum2 = 0, d = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n / 2; i++){

        while(a[i] != 0){
            sum1 += a[i] % 10;
            a[i] /= 10;
        }
    }

    for(int j = n - 1; j >= n / 2; j--){

        while(a[j] != 0){
            sum2 += a[j] % 10;
            a[j] /= 10;
        }
    }
    if(sum1 == sum2){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}