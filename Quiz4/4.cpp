#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int n; cin >> n;
    a = 0; b = 0;
    int array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    int max = *max_element(array, array + n);
    for(int i = n - 1; i >= 0; i--){

        if(max % array[i]){
            b++;
        }
        else {
            a++;
        }
    }
    return a;
}

int main(){
    int a, b;
    cout << gcd(a, b);
}