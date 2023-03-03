#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, t, s;
    s = 109;
    cin >> v >> t;

    if (v > 0){
        cout << (v * t) - s;
    }
        else if (v < 0){
            cout << (v * t) + s;
        }
}