#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b = 0, d, f = 0;
    cin >> n;

    for (int i = 0; n > i; i++){
        cin >> d;

        if (d % 2 == 0){
        b = b + 1;
        }
            if (d % 2 == 1){
            f = f + 1;
            }
    }
    cout << b << " " << f;
    return 0;
}
