#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, j;
    long long sum = 0;
    cin >> n >> j;
    long long a[n];

    for (long i = 1; i <= n; i++){
        cin >> a[i];
    }

        for (long i = 1; i <= n; i++){

            if (j >= a[i]){
                sum += 1;
            }
        }
        cout << sum;

        return 0;
}