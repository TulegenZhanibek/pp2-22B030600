#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b = pow(-10, 9);
    b < 0;
    cin >> n;
    int array[n];

    for (int i = 0; n > i; i++){
        cin >> array[i];

        if (array[i] >= b){
            b = array[i];
        }
    }
    cout << b;
    return 0;
}