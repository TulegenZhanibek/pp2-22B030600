#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n;
    int array[n];

    for (int i = 0; n > i; i++){
        cin >> array[i];
        
        if (array[i] > 0){
        d += 1;
        }
    }
    cout << d;
    return 0;
}