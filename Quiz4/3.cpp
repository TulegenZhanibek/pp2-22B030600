#include <bits/stdc++.h>
using namespace std;

int main(){
    char a, d = 0; cin >> a;
    string s; cin >> s;

    for(int i = 0; i < s.length(); i++){

        if(!(s[i] == a)){
            cout << s[i];
        }
    }
    //cout << s;
}