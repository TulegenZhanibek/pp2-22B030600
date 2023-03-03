#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b = 1, i;
    cin >> n;
        
    for (int i = 0; n >= i; i++){
        i = b * b;
        b = b + 1;

        if (n >= i){
            cout << i << endl;
        }
    }
    return 0;
}

