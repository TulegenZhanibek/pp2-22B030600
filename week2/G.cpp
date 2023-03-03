#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int n, q;
    cin >> n;

    for (int i = 0; n > i; i++){
        cin >> x;

        if (q < x){
        q = x;
        }
    }
        cout << q << endl;

    return 0;
}