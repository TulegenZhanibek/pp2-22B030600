#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q, e, d = 0;
    cin >> n;
    for (int i = 0; n > i; i++){
        cin >> q;

        if (q % 10 == 7){
        e += 1; 
    }
    }
    cout << e;
    return 0;
}
