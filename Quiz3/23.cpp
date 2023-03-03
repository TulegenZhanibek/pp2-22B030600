#include <bits/stdc++.h>
using namespace std;

int phi(int n){
    cin >> n;
    int a[n];
    int sum = 0;
    a[0] = 1;
    a[1] = 1;
    
    if(n == 1 || n == 0){
        return 1;
    }
    if(n >= 2){

        for(int i = 2; i < n; i++){
            a[i] = a[i - 1] + a[i - 2];
            cout << a[i] << " ";
            //sum += a[i];
        }
        //return sum;
    }
}

int main(){
    int n;
    cout << phi(n);
}