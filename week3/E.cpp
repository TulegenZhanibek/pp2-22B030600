#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b;
    long b = 0;
    cin >> n;
    int array[n];
    
    
    for (int i = 0; i < n; i++){
        cin >> array[i];
        b += array[i];
    }

    cout << b;
    return 0;
    
}