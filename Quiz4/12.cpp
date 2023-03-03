#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.length(); i++){

        if(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')){
            cout << s[i];
        }
    }
}