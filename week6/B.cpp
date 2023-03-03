#include <bits/stdc++.h>
using namespace std;

void acc(int sum1, int sum2, int n){
    cin >> n;
    sum1 = 0;
    sum2 = 0;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int j = 0; j < n; j++){
        cin >> b[j];
    }
    
    for(int i = 0, j = 0; i < n, j < n; i++, j++){

        if(a[i] >= b[j]){
            cout << a[i] - b[j] << " ";
        }
        else if(a[i] < b[j]){
            cout << b[j] - a[i] << " ";
        }
    }
}

int main(){
    int sum1, sum2, n;
    acc(sum1, sum2, n);
}