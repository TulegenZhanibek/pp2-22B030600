#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t = 0, r = 0;
    cin >> n;
    int a[n];
    int b[n];
    int c[n];
    int shar[n];
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum1 += a[i];
    }

    for(int j = 0; j < n; j++){
        cin >> b[j];
        sum2 += b[j];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(sum1 > sum2){
                t = a[i] - b[j];
            }
            else if(sum1 < sum2){
                r = b[j] - a[i];
            }
        }

            for(int i = 0; i < n; i++){
                a[i] = t;
                cout << a[i] << " ";
                return 0;
                }
            for(int j = 0; j < n; j++){
                b[j] = r;
                cout << b[j] << " ";
                }
    }
}