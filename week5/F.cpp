#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, b;
    int l, r;
    cin >> s >> l >> r;

    for(int i = l; i <= r; i++){

        if('a' <= s[i] && s[i] <= 'z'){
            cout << s[i];
        }
    }
}